r_greedy_heuristic_prioritization <- function(
  rij, pu_costs, pu_locked_in, pu_locked_out, target, budget) {
  # assert that arguments are valid
  assertthat::assert_that(
    is.matrix(rij), ncol(rij) > 0, nrow(rij) > 0, assertthat::noNA(c(rij)),
    is.numeric(target), length(target) == nrow(rij), assertthat::noNA(target),
    is.numeric(pu_costs), length(pu_costs) == ncol(rij),
    ncol(rij) >= max(target),
    assertthat::noNA(pu_costs),
    is.numeric(pu_locked_in), length(pu_locked_in) == ncol(rij),
    assertthat::noNA(pu_locked_in),
    all(pu_locked_in %in% c(0, 1)),
    is.numeric(pu_locked_out), length(pu_locked_out) == ncol(rij),
    assertthat::noNA(pu_locked_out),
    all(pu_locked_out %in% c(0, 1)),
    assertthat::is.number(budget), assertthat::noNA(budget))
  assertthat::assert_that(
    sum(pu_costs[pu_locked_in > 0.5]) <= budget,
    msg = paste("locked in planning units exceed budget"))
  assertthat::assert_that(
    sum(sort(pu_costs[pu_locked_out < 0.5])[seq_len(max(target))]) <= budget,
    msg = paste("budget too low to obtain solution with a number of planning
                units >= max(targets)"))
  # initialization
  ## initial solution
  curr_solution <- rep(FALSE, ncol(rij))
  ## locked planning units
  curr_solution[(pu_locked_in > 0.5) | (pu_costs < 1e-15)] <- TRUE
  curr_pu_rem_idx <- which((!curr_solution) & (pu_locked_out < 0.5))
  ## define targets
  curr_target <- pmin(sum(curr_solution), target)
  ## define obj fun for starting solution
  if (sum(curr_solution) == 0) {
    curr_obj <- 0
  } else {
    curr_obj <- r_approx_conservation_value(
      rij[, which(curr_solution), drop = FALSE], rep(curr_target))
  }

  # main iteration loop
  keep_looping <-
    (length(curr_pu_rem_idx) > 0) &&
    ((sum(curr_solution * pu_costs) +
      min(pu_costs[curr_pu_rem_idx])) <=
     budget)

  while(keep_looping) {
    ## update target
    curr_solution_cost <- sum(pu_costs * curr_solution)
    ## calculate the cost of the cheapest n-1 remaining planning units
    if (sum(curr_solution) < max(target)) {
      curr_min_feasible_pu_cost <- budget -
        (sum(curr_solution * pu_costs) +
         sum(sort(pu_costs[!curr_solution])[seq_len(max(target) -
                                                    sum(curr_solution))]))
    } else {
      curr_min_feasible_pu_cost <- Inf
    }

    ## calculate benefit associated with dropping each remaining planning unit
    curr_alt_obj <- vapply(curr_pu_rem_idx, FUN.VALUE = numeric(2),
                           function(i) {
      ## determine if selecting the i'th planning unit would prevent the final
      ## solution from containing n number of planning units
      ## (where n = max(targets))
      curr_feasible <-
        (((curr_min_feasible_pu_cost >= pu_costs[i]) ||
          ((abs(pu_costs[i] - min(pu_costs)) < 1.0e-15))) &&
        ((pu_costs[i] + curr_solution_cost) <= budget))
      ## calculate the alternate obj fun for the i'th planning unit
      s <- curr_solution
      s[i] <- TRUE
      obj <- r_proxy_conservation_value(
        rij[, which(s), drop = FALSE], curr_target)
      ## return data
      c(!curr_feasible, obj)
    })

    ## find idx with best performance
    curr_ce <- curr_alt_obj[2, ] / pu_costs[curr_pu_rem_idx]
    curr_ce[curr_alt_obj[1, ] > 0.5] <- -Inf
    curr_idx <- which.max(curr_ce)

    ## update curr_solution and curr_obj
    curr_solution[curr_pu_rem_idx[curr_idx]] <- TRUE
    curr_pu_rem_idx <- which((!curr_solution) & (pu_locked_out < 0.5))
    curr_obj <- curr_alt_obj[2, curr_idx]

    ## update loop status
    keep_looping <-
      (length(curr_pu_rem_idx) > 0) &&
      ((sum(curr_solution * pu_costs) +
        min(pu_costs[curr_pu_rem_idx])) <=
       budget)
  }

  # return solution
  list(x = curr_solution,
       objval = rcpp_expected_value_of_action(curr_solution, rij, target))
}

brute_force_prioritization <- function(
  rij, pu_costs, pu_locked_in, pu_locked_out, target, budget) {
  # assert that arguments are valid
  assertthat::assert_that(
    is.matrix(rij), ncol(rij) > 0, nrow(rij) > 0, assertthat::noNA(c(rij)),
    is.numeric(target), length(target) == nrow(rij), assertthat::noNA(target),
    ncol(rij) >= max(target),
    is.numeric(pu_costs), length(pu_costs) == ncol(rij),
    assertthat::noNA(pu_costs),
    is.numeric(pu_locked_in), length(pu_locked_in) == ncol(rij),
    assertthat::noNA(pu_locked_in),
    all(pu_locked_in %in% c(0, 1)),
    is.numeric(pu_locked_out), length(pu_locked_out) == ncol(rij),
    assertthat::noNA(pu_locked_out),
    all(pu_locked_out %in% c(0, 1)),
    assertthat::is.number(budget), assertthat::noNA(budget))
  # set constants
  n_pu <- ncol(rij)
  n_f <- nrow(rij)
  m <- matrix(0, ncol = n_pu, nrow = 1)
  # brute force all combinations
  objs <- vapply(seq_len(rcpp_n_states(ncol(rij))), FUN.VALUE = numeric(1),
                 function(i) {
    # generate nth solution
    x <- c(rcpp_nth_state(i, m))
    # if number of selected planning units less than target return -Inf
    if (sum(x) < max(target))
      return(-Inf)
    # if any locked in planning units are not selected return -Inf
    if (any(x < pu_locked_in))
      return(-Inf)
    # if any locked out planning units are selected return -Inf
    if (any((x + pu_locked_out) == 2))
      return(-Inf)
    # if budget is exceeded then return -Inf
    if (sum(x * pu_costs) > budget)
      return(-Inf)
    # if feasible solution then return objective function
    rcpp_expected_value_of_action(as.logical(x), rij, target)
  })
  # find best solution
  list(x = as.logical(c(rcpp_nth_state(which.max(objs), m))),
       objval = max(objs))
}
