#' Expected value of the decision given survey information
#'
#' Calculate the \emph{expected value of the conservation management decision
#' given survey information}. This metric describes the value of the management
#' decision that is expected when the decision maker conducts a surveys a
#' set of sites to inform the decision.
#'
#' @inheritParams approx_evdci
#'
#' @param site_survey_scheme_column \code{character} name of \code{logical}
#'  (\code{TRUE} / \code{FALSE}) column in the argument to \code{site_data}
#'  that indicates which sites are selected in the scheme or not.
#'  No missing \code{NA} values are permitted. Additionally, only sites
#'  that are missing data can be selected or surveying (as per the
#'  argument to \code{site_occupancy_columns}).
#'
#' @param feature_survey_column \code{character} name of the column in the
#'   argument to \code{feature_data} that contains \code{logical} (\code{TRUE} /
#'   \code{FALSE}) values indicating if the feature will be surveyed in
#'   the planned surveys or not. Note that considering additional features will
#'   rapidly increase computational burden, and so it is only recommended to
#'   consider features that are of specific conservation interest.
#'   No missing (\code{NA}) values are permitted in this column.
#'
#' @param site_survey_cost_column \code{character} name of column in the
#'   argument to  \code{site_data} that contains costs for surveying each
#'   site. This column should have \code{numeric} values that are equal to
#'   or greater than zero. No missing (\code{NA}) values are permitted in this
#'   column.
#'
#' @param site_env_vars_columns \code{character} names of columns in the
#'   argument to  \code{site_data} that contain environmental information
#'   for fitting updated occupancy models based on possible survey outcomes.
#'   Each column should correspond to a different environmental variable,
#'   and contain \code{numeric}, \code{factor}, or \code{character} data.
#'   No missing (\code{NA}) values are permitted in these columns.
#'
#' @param site_weight_columns \code{character} name of columns in
#'  \code{site_data} containing weights for model fitting for each
#'  feature. These columns must contain \code{numeric} values greater
#'  than or equal to zero. No missing (\code{NA}) values are
#'  permitted. Defaults to \code{NULL} such that all data are given
#'  equal weight when fitting models.
#'
#' @param xgb_parameters \code{list} of \code{list} objects
#'   containing the parameters for fitting models for each
#'   feature. See documentation for the \code{params} argument in
#'   \code{\link[xgboost]{xgb.train}} for available parameters. Ideally,
#'   these parameters would be determined using the
#'   \code{\link{tune_occupancy_models}} function. Note that arguments must
#'   have a \code{nrounds} element (see example below).
#'
#' @param xgb_n_folds \code{integer} vector containing the number of
#'   k-fold cross-validation folds to use for fitting models and
#'   assessing model performance for each feature. Ideally, the number of folds
#'   should be exactly the same as the number used for tuning the
#'   model parameters (i.e. same parameter to the \code{n_folds}
#'   argument in \link{tune_occupancy_models} when generating parameters
#'  for \code{xgb_parameters}).
#'
#' @param seed \code{integer} state of the random number generator for
#'  partitioning data into folds cross-validation and fitting \pkg{xgboost}
#'  models. This parameter must remain the same to compare results for
#'  different survey schemes. Defaults to 500.
#'
#' @inherit evdci details return
#'
#' @seealso \code{\link{prior_probability_matrix}}.
#'
#' @examples
#' # set seeds for reproducibility
#' library(RandomFields)
#' set.seed(123)
#' RFoptions(seed = 123)
#'
#' # simulate data
#' site_data <- simulate_site_data(n_sites = 15, n_features = 2, prop = 0.5)
#' feature_data <- simulate_feature_data(n_features = 2, prop = 1)
#'
#' # preview simulated data
#' print(site_data)
#' print(feature_data)
#'
#' # set total budget for managing sites for conservation
#'  # (i.e. 50% of the cost of managing all sites)
#' total_budget <- sum(site_data$management_cost) * 0.5
#'
#' # create a survey scheme that samples the first two sites that
#' # are missing data
#' site_data$survey_site <- FALSE
#' site_data$survey_site[which(is.na(site_data$f1))[1:2]] <- TRUE
#'
#' # define xgboost tuning parameters
#' xgb_parameters <-
#'  list(list(objective = "binary:logistic", nrounds = 8, eta = 0.1))[rep(1, 2)]
#'
#' # calculate expected value of management decision given the survey
#' # information using exact method
#' ev_survey <- evdsi(
#'   site_data, feature_data, c("f1", "f2"), c("p1", "p2"),
#'   c("e1", "e2", "e3"), "management_cost", "survey_site",
#'   "survey_cost", "survey", "survey_sensitivity", "survey_specificity",
#'   "model_sensitivity", "model_specificity",
#'   "alpha", "gamma", total_budget, xgb_parameters)
#'
#' # print exact value
#' print(ev_survey)
#'
#' @export
evdsi <- function(
  site_data,
  feature_data,
  site_occupancy_columns,
  site_probability_columns,
  site_env_vars_columns,
  site_management_cost_column,
  site_survey_scheme_column,
  site_survey_cost_column,
  feature_survey_column,
  feature_survey_sensitivity_column,
  feature_survey_specificity_column,
  feature_model_sensitivity_column,
  feature_model_specificity_column,
  feature_alpha_column,
  feature_gamma_column,
  total_budget,
  xgb_parameters,
  site_management_locked_in_column = NULL,
  prior_matrix = NULL,
  n_approx_obj_fun_points = 1000,
  optimality_gap = 0,
  site_weight_columns = NULL,
  xgb_n_folds = rep(5, nrow(feature_data)),
  seed = 500) {
  # assert arguments are valid
  assertthat::assert_that(
    ## site_data
    inherits(site_data, "sf"), ncol(site_data) > 0,
    nrow(site_data) > 0,
    ## feature_data
    inherits(feature_data, "data.frame"), ncol(feature_data) > 0,
    nrow(feature_data) > 0,
    ## site_occupancy_columns
    is.character(site_occupancy_columns),
    identical(nrow(feature_data), length(site_occupancy_columns)),
    assertthat::noNA(site_occupancy_columns),
    all(assertthat::has_name(site_data, site_occupancy_columns)),
    ## site_probability_columns
    is.character(site_probability_columns),
    identical(nrow(feature_data), length(site_probability_columns)),
    assertthat::noNA(site_probability_columns),
    all(assertthat::has_name(site_data, site_probability_columns)),
    ## site_env_vars_columns
    is.character(site_env_vars_columns),
    assertthat::noNA(site_env_vars_columns),
    all(assertthat::has_name(site_data, site_env_vars_columns)),
    ## site_management_cost_column
    assertthat::is.string(site_management_cost_column),
    all(assertthat::has_name(site_data, site_management_cost_column)),
    is.numeric(site_data[[site_management_cost_column]]),
    assertthat::noNA(site_data[[site_management_cost_column]]),
    ## site_survey_scheme_column
    assertthat::is.string(site_survey_scheme_column),
    all(assertthat::has_name(site_data, site_survey_scheme_column)),
    is.logical(site_data[[site_survey_scheme_column]]),
    assertthat::noNA(site_data[[site_survey_scheme_column]]),
    sum(site_data[[site_survey_scheme_column]]) >= 1,
    ## site_survey_cost_column
    assertthat::is.string(site_survey_cost_column),
    all(assertthat::has_name(site_data, site_survey_cost_column)),
    is.numeric(site_data[[site_survey_cost_column]]),
    assertthat::noNA(site_data[[site_survey_cost_column]]),
    ## feature_survey_column
    assertthat::is.string(feature_survey_column),
    all(assertthat::has_name(feature_data, feature_survey_column)),
    is.logical(feature_data[[feature_survey_column]]),
    assertthat::noNA(feature_data[[feature_survey_column]]),
    sum(feature_data[[feature_survey_column]]) >= 1,
    ## feature_survey_sensitivity_column
    assertthat::is.string(feature_survey_sensitivity_column),
    all(assertthat::has_name(feature_data, feature_survey_sensitivity_column)),
    is.numeric(feature_data[[feature_survey_sensitivity_column]]),
    assertthat::noNA(
      feature_data[[feature_survey_sensitivity_column]]),
    all(feature_data[[feature_survey_sensitivity_column]] >= 0),
    all(feature_data[[feature_survey_sensitivity_column]] <= 1),
    ## feature_survey_specificity_column
    assertthat::is.string(feature_survey_specificity_column),
    all(assertthat::has_name(feature_data, feature_survey_specificity_column)),
    is.numeric(feature_data[[feature_survey_specificity_column]]),
    assertthat::noNA(feature_data[[feature_survey_specificity_column]]),
    all(feature_data[[feature_survey_specificity_column]] >= 0),
    all(feature_data[[feature_survey_specificity_column]] <= 1),
    ## feature_model_sensitivity_column
    assertthat::is.string(feature_model_sensitivity_column),
    all(assertthat::has_name(feature_data, feature_model_sensitivity_column)),
    is.numeric(feature_data[[feature_model_sensitivity_column]]),
    assertthat::noNA(feature_data[[feature_model_sensitivity_column]]),
    all(feature_data[[feature_model_sensitivity_column]] >= 0),
    all(feature_data[[feature_model_sensitivity_column]] <= 1),
    ## feature_model_specificity_column
    assertthat::is.string(feature_model_specificity_column),
    all(assertthat::has_name(feature_data, feature_model_specificity_column)),
    is.numeric(feature_data[[feature_model_specificity_column]]),
    assertthat::noNA(feature_data[[feature_model_specificity_column]]),
    all(feature_data[[feature_model_specificity_column]] >= 0),
    all(feature_data[[feature_model_specificity_column]] <= 1),
    ## feature_alpha_column
    assertthat::is.string(feature_alpha_column),
    all(assertthat::has_name(feature_data, feature_alpha_column)),
    is.numeric(feature_data[[feature_alpha_column]]),
    assertthat::noNA(feature_data[[feature_alpha_column]]),
    all(feature_data[[feature_alpha_column]] >= 0),
    ## feature_gamma_column
    assertthat::is.string(feature_gamma_column),
    all(assertthat::has_name(feature_data, feature_gamma_column)),
    is.numeric(feature_data[[feature_gamma_column]]),
    assertthat::noNA(feature_data[[feature_gamma_column]]),
    all(feature_data[[feature_gamma_column]] >= 0),
    ## total_budget
    assertthat::is.number(total_budget), assertthat::noNA(total_budget),
    isTRUE(total_budget > 0),
    ## xgb_parameters
    is.list(xgb_parameters),
    identical(length(xgb_parameters), nrow(feature_data)),
    ## xgb_n_folds
    is.numeric(xgb_n_folds),
    all(xgb_n_folds > 0), identical(length(xgb_n_folds), nrow(feature_data)),
    assertthat::noNA(xgb_n_folds),
    ## prior_matrix
    inherits(prior_matrix, c("matrix", "NULL")),
    ## n_approx_obj_fun_points
    assertthat::is.number(n_approx_obj_fun_points),
    assertthat::noNA(n_approx_obj_fun_points),
    isTRUE(n_approx_obj_fun_points > 0),
    ## optimality_gap
    assertthat::is.number(optimality_gap),
    assertthat::noNA(optimality_gap),
    isTRUE(optimality_gap >= 0),
    ## seed
    assertthat::is.number(seed))
  ## site_management_locked_in_column
  if (!is.null(site_management_locked_in_column)) {
    assertthat::assert_that(
      assertthat::is.string(site_management_locked_in_column),
      all(assertthat::has_name(site_data, site_management_locked_in_column)),
      is.logical(site_data[[site_management_locked_in_column]]),
      assertthat::noNA(site_data[[site_management_locked_in_column]]))
    assertthat::assert_that(
      sum(site_data[[site_management_locked_in_column]] *
          site_data[[site_management_cost_column]]) <=
      total_budget,
      msg = "cost of managing locked in sites exceeds total budget")
  }
  ## validate rij values
  validate_site_occupancy_data(site_data, site_occupancy_columns)
  ## validate pij values
  validate_site_prior_data(site_data, site_probability_columns)
  ## validate wij values
  if (!is.null(site_weight_columns))
    validate_site_weight_data(site_data, site_occupancy_columns,
      site_weight_columns)

  # prepare data for analysis
  ## drop spatial information
  if (inherits(site_data, "sf"))
    site_data <- sf::st_drop_geometry(site_data)
  ## calculate prior matrix
  if (is.null(prior_matrix)) {
    pij <- prior_probability_matrix(
      site_data, feature_data, site_occupancy_columns, site_probability_columns,
      feature_survey_sensitivity_column, feature_survey_specificity_column,
      feature_model_sensitivity_column, feature_model_specificity_column)
  } else {
    validate_prior_data(prior_matrix, nrow(site_data), nrow(feature_data))
    pij <- prior_matrix
  }
  ## prepare locked in data
  if (!is.null(site_management_locked_in_column)) {
    site_management_locked_in <- site_data[[site_management_locked_in_column]]
  } else {
    site_management_locked_in <- rep(FALSE, nrow(site_data))
  }
  ## identify sites that have previously been surveyed
  site_survey_status <- !is.na(site_data[[site_occupancy_columns[1]]])
  ## xgb_nrounds
  xgb_nrounds <- vapply(seq_along(xgb_parameters), FUN.VALUE = numeric(1),
                        function(i) {
    out <- xgb_parameters[[i]]$nrounds
    if (is.null(out))
      stop(paste0("argument to xgb_parameters[[", i,
                  "]] is missing nrounds element"))
    out
  })
  ## xgb_parameters
  xgb_parameters <- lapply(xgb_parameters, function(x) {
    out <- x[names(x) != "nrounds"]
    out <- lapply(x, as.character)
    if (is.null(out$objective)) {
      out$objective <- "binary:logistic"
      warning(paste("no objective specified for model fitting,",
                    "assuming binary:logistic"))
    }
    xgb_param_names <- c("max_depth", "eta", "nrounds", "lambda",
                         "subsample", "colsample_bytree", "objective")
    extra_names <- names(out)[!names(out) %in% xgb_param_names]
    assertthat::assert_that(
      length(extra_names) == 0,
      msg = paste0("argument to xgb_parameters has unrecognized parameters: ,",
                   paste(extra_names, collapse = ",")))
    out$nthread <- "1" # force single thread for reproducibility
    out$seed <- as.character(seed)
    out
  })
  ## extract site occupancy data
  rij <- t(as.matrix(site_data[, site_occupancy_columns]))
  ## folds for training and testing models
  pu_predict_idx <-
    which(site_data[[site_survey_scheme_column]] | site_survey_status)
  xgb_folds <- lapply(seq_len(nrow(feature_data)),
    function(i) {
      withr::with_seed(seed, {
        create_folds(unname(rij[i, pu_predict_idx]), xgb_n_folds[i],
                     index = pu_predict_idx,
                     na.fail = FALSE, seed = seed)
      })
  })
  ## extract site weight data
  if (!is.null(site_weight_columns)) {
    wij <- t(as.matrix(site_data[, site_weight_columns]))
  } else {
    wij <- matrix(1, ncol = ncol(rij), nrow = nrow(rij))
  }
  ## extract environmental data
  ejx <- as.matrix(site_data[, site_env_vars_columns])
  ## prepare rij matrix for Rcpp
  rij[is.na(rij)] <- -1

  # main calculation
  withr::with_seed(seed, {
    out <- rcpp_expected_value_of_decision_given_survey_scheme(
      rij = rij, pij = pij, wij = wij,
      survey_features = feature_data[[feature_survey_column]],
      survey_sensitivity = feature_data[[feature_survey_sensitivity_column]],
      survey_specificity = feature_data[[feature_survey_specificity_column]],
      pu_survey_solution = site_data[[site_survey_scheme_column]],
      pu_survey_status = site_survey_status,
      pu_survey_costs = site_data[[site_survey_cost_column]],
      pu_purchase_costs = site_data[[site_management_cost_column]],
      pu_purchase_locked_in = site_management_locked_in,
      pu_env_data = ejx,
      xgb_parameters = xgb_parameters,
      xgb_train_folds = lapply(xgb_folds, `[[`, "train"),
      xgb_test_folds = lapply(xgb_folds, `[[`, "test"),
      n_xgb_nrounds = xgb_nrounds,
      obj_fun_alpha = feature_data[[feature_alpha_column]],
      obj_fun_gamma = feature_data[[feature_gamma_column]],
      n_approx_obj_fun_points = n_approx_obj_fun_points,
      total_budget = total_budget,
      optim_gap = optimality_gap)
  })
  # return result
  out
}