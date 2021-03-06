r_expected_value_of_action <- function(
  solution, prior_data, target) {
    r_conservation_value(prior_data[, solution > 0.5, drop = FALSE], target)
}

r_expected_value_of_decision_given_current_info <- function(
  prior_data, pu_costs, pu_purchase_locked_in, pu_purchase_locked_out, target, budget) {
  # find optimal solution
  solution <- r_greedy_heuristic_prioritization(
    prior_data, pu_costs, as.numeric(pu_purchase_locked_in),
    as.numeric(pu_purchase_locked_out), target, budget)$x
  # calculate expected value
  r_expected_value_of_action(
    solution, prior_data, target)
}

r_expected_value_of_decision_given_survey_scheme <- function(
  pij,
  survey_features,
  survey_sensitivity, survey_specificity,
  pu_survey_solution,
  pu_survey_costs, pu_purchase_costs, pu_purchase_locked_in,
  pu_purchase_locked_out, pu_env_data,
  obj_fun_target, total_budget) {
  # init
  ## constants
  n_pu <- ncol(pij)
  n_f <- nrow(pij)
  n_f_survey <- sum(survey_features)
  # preliminary processing
  ## calculate remaining budget
  remaining_budget <- total_budget - sum(pu_survey_costs * pu_survey_solution)
  ## calculate total outcomes
  total_outcomes <- n_states(sum(pu_survey_solution), n_f_survey) - 1
  ## planning unit indices
  pu_survey_solution_idx <- which(pu_survey_solution > 0.5)
  ## feature indices
  survey_features_idx <- which(survey_features > 0.5)
  survey_features_rev_idx <- rep(0, n_f)
  survey_features_rev_idx[survey_features_idx] <-
    seq_along(survey_features_idx) - 1
  ## subset of prior matrix for features that need surveying
  pij_survey_species_subset <- pij[survey_features_idx, , drop = FALSE]
  ## total probability of positive survey result
  total_probability_of_survey_positive <-
    total_probability_of_positive_result(
      pij, survey_sensitivity, survey_specificity)
  total_probability_of_survey_positive_log <-
    total_probability_of_survey_positive
  total_probability_of_survey_positive_log[] <-
    log(total_probability_of_survey_positive)
  ## total probability of negative survey result
  total_probability_of_survey_negative <-
    total_probability_of_negative_result(
      pij, survey_sensitivity, survey_specificity)
  total_probability_of_survey_negative_log <-
    total_probability_of_survey_negative
  total_probability_of_survey_negative_log[] <-
    log(total_probability_of_survey_negative)
  ## find indices for cells corresponding to planning units and features that
  ## that are specified to be surveyed
  rij_outcome_idx <- c()
  counter <- 0
  for (j in seq_len(n_pu)) {
    for (i in seq_len(n_f)) {
      if ((survey_features[i] > 0.5) && (pu_survey_solution[j] > 0.5))
        rij_outcome_idx <- c(rij_outcome_idx, counter)
      counter <- counter + 1
    }
  }

  # main processing
  out <- Inf
  for (i in seq(0, total_outcomes)) {
    ## generate state
    curr_oij <- rcpp_nth_state_sparse(i, rij_outcome_idx + 1, pij)

    ## calculate likelihood of outcome
    curr_prob <- probability_of_outcome(
      curr_oij, total_probability_of_survey_positive_log,
      total_probability_of_survey_negative_log, rij_outcome_idx + 1);

    ## generate posterior probabilities given survey outcomes
    curr_wij <- r_update_posterior_probability_matrix(
      pij, curr_oij,
      survey_features,
      survey_sensitivity, survey_specificity,
      pu_survey_solution)

    ## generate prioritisation using updated posterior matrix
    curr_solution <- r_greedy_heuristic_prioritization(
      curr_wij, pu_purchase_costs,
      as.numeric(pu_purchase_locked_in), as.numeric(pu_purchase_locked_out),
      obj_fun_target, remaining_budget)$x

    ## calculate expected value of action
    curr_value <- log(r_expected_value_of_action(
      curr_solution, curr_wij, obj_fun_target))

    ## calculate expected value of the decision
    if (!is.finite(out)) {
      out <- curr_value + curr_prob
    } else {
      out <- log_sum(out, curr_value + curr_prob)
    }
  }
  # exports
  exp(out)
}
