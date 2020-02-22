#include "rcpp_expected_value_of_management_action.h"

double expected_value_of_management_action(
  std::vector<bool> &solution,
  Eigen::MatrixXd &pij_log,
  Eigen::VectorXd &alpha,
  Eigen::VectorXd &gamma) {
    
  // initialization
  const std::size_t n_pu = pij_log.cols();
  const std::size_t solution_size =
    std::accumulate(solution.begin(), solution.end(), 0);
  Eigen::MatrixXd sub_pij_log(pij_log.rows(), solution_size);

  // preliminary processing
  /// subset planning units selected in the solution
  {
    std::size_t i = 0;
    for (std::size_t j = 0; j < n_pu; ++j) {
      if (solution[j]) {
        sub_pij_log.col(i) = pij_log.col(j);
        ++i;
      }
    }
  }

  // main processing
  /// initialize loop variables
  double out = std::numeric_limits<double>::infinity();
  double curr_value_given_state_occurring;
  double curr_probability_of_state_occurring;
  double curr_expected_value_given_state;
  Eigen::MatrixXd curr_state(sub_pij_log.rows(), sub_pij_log.cols());
  /// determine number of states that affect the solution
  mpz_t n;
  mpz_init(n);
  n_states(curr_state.size(), n);
  /// initialize loop iterator
  mpz_t i;
  mpz_init(i);
  mpz_set_ui(i, 0);
  /// iterate over each state
  while (mpz_cmp(i, n) < 0) {
    //// generate the i'th state
    nth_state(i, curr_state);
    //// caculculate the value of the prioritization given the state
    curr_value_given_state_occurring =
      std::log(alpha.cwiseProduct(curr_state.rowwise().sum()).array().
        pow(gamma.array()).sum());
    /// calculate probability of the state occurring
    curr_probability_of_state_occurring =
      log_probability_of_state(curr_state, sub_pij_log);
    /// add the value of the prioritization given the state,
    /// weighted by the probability of the state occuring
    curr_expected_value_given_state =
      curr_value_given_state_occurring + curr_probability_of_state_occurring;
    /// calculate expected value of action
    if (std::isinf(out)) {
      out = curr_expected_value_given_state;
    } else {
      out =
        log_sum(out, curr_expected_value_given_state);
    }
  }

  // clear memory
  mpz_clear(i);
  mpz_clear(n);

  // return result
  return std::exp(out);
}


// [[Rcpp::export]]
double rcpp_expected_value_of_management_action(
  std::vector<bool> solution,
  Eigen::MatrixXd pij,
  Eigen::VectorXd alpha,
  Eigen::VectorXd gamma) {
  // calculate log pij
  pij.array() = pij.array().log();
  // return result
  return expected_value_of_management_action(solution, pij, alpha, gamma);
}
