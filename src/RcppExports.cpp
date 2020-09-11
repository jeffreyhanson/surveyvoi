// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// rcpp_standard_error_value
double rcpp_standard_error_value(Eigen::VectorXd& x);
RcppExport SEXP _surveyvoi_rcpp_standard_error_value(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::VectorXd& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_standard_error_value(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_log_sum
double rcpp_log_sum(Eigen::VectorXd& x);
RcppExport SEXP _surveyvoi_rcpp_log_sum(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::VectorXd& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_log_sum(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_approx_expected_value_of_decision_given_survey_scheme
Rcpp::NumericVector rcpp_approx_expected_value_of_decision_given_survey_scheme(Eigen::MatrixXd pij, std::vector<bool> survey_features, Eigen::VectorXd survey_sensitivity, Eigen::VectorXd survey_specificity, std::vector<bool> pu_survey_solution, Eigen::VectorXd pu_survey_costs, Eigen::VectorXd pu_purchase_costs, Eigen::VectorXd pu_purchase_locked_in, Eigen::VectorXd pu_purchase_locked_out, Eigen::VectorXi obj_fun_target, double total_budget, std::size_t n_approx_replicates, std::size_t n_approx_outcomes_per_replicate, double seed);
RcppExport SEXP _surveyvoi_rcpp_approx_expected_value_of_decision_given_survey_scheme(SEXP pijSEXP, SEXP survey_featuresSEXP, SEXP survey_sensitivitySEXP, SEXP survey_specificitySEXP, SEXP pu_survey_solutionSEXP, SEXP pu_survey_costsSEXP, SEXP pu_purchase_costsSEXP, SEXP pu_purchase_locked_inSEXP, SEXP pu_purchase_locked_outSEXP, SEXP obj_fun_targetSEXP, SEXP total_budgetSEXP, SEXP n_approx_replicatesSEXP, SEXP n_approx_outcomes_per_replicateSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type pij(pijSEXP);
    Rcpp::traits::input_parameter< std::vector<bool> >::type survey_features(survey_featuresSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type survey_sensitivity(survey_sensitivitySEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type survey_specificity(survey_specificitySEXP);
    Rcpp::traits::input_parameter< std::vector<bool> >::type pu_survey_solution(pu_survey_solutionSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type pu_survey_costs(pu_survey_costsSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type pu_purchase_costs(pu_purchase_costsSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type pu_purchase_locked_in(pu_purchase_locked_inSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type pu_purchase_locked_out(pu_purchase_locked_outSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXi >::type obj_fun_target(obj_fun_targetSEXP);
    Rcpp::traits::input_parameter< double >::type total_budget(total_budgetSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type n_approx_replicates(n_approx_replicatesSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type n_approx_outcomes_per_replicate(n_approx_outcomes_per_replicateSEXP);
    Rcpp::traits::input_parameter< double >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_approx_expected_value_of_decision_given_survey_scheme(pij, survey_features, survey_sensitivity, survey_specificity, pu_survey_solution, pu_survey_costs, pu_purchase_costs, pu_purchase_locked_in, pu_purchase_locked_out, obj_fun_target, total_budget, n_approx_replicates, n_approx_outcomes_per_replicate, seed));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_expected_value_of_action
double rcpp_expected_value_of_action(std::vector<bool> solution, Eigen::MatrixXd pij, Eigen::VectorXi target);
RcppExport SEXP _surveyvoi_rcpp_expected_value_of_action(SEXP solutionSEXP, SEXP pijSEXP, SEXP targetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<bool> >::type solution(solutionSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type pij(pijSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXi >::type target(targetSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_expected_value_of_action(solution, pij, target));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_expected_value_of_decision_given_current_info
double rcpp_expected_value_of_decision_given_current_info(Eigen::MatrixXd& pij, Eigen::VectorXd& pu_costs, Eigen::VectorXd& pu_locked_in, Eigen::VectorXd& pu_locked_out, Eigen::VectorXi& target, double budget);
RcppExport SEXP _surveyvoi_rcpp_expected_value_of_decision_given_current_info(SEXP pijSEXP, SEXP pu_costsSEXP, SEXP pu_locked_inSEXP, SEXP pu_locked_outSEXP, SEXP targetSEXP, SEXP budgetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd& >::type pij(pijSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd& >::type pu_costs(pu_costsSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd& >::type pu_locked_in(pu_locked_inSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd& >::type pu_locked_out(pu_locked_outSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXi& >::type target(targetSEXP);
    Rcpp::traits::input_parameter< double >::type budget(budgetSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_expected_value_of_decision_given_current_info(pij, pu_costs, pu_locked_in, pu_locked_out, target, budget));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_expected_value_of_decision_given_survey_scheme
double rcpp_expected_value_of_decision_given_survey_scheme(Eigen::MatrixXd pij, std::vector<bool> survey_features, Eigen::VectorXd survey_sensitivity, Eigen::VectorXd survey_specificity, std::vector<bool> pu_survey_solution, Eigen::VectorXd pu_survey_costs, Eigen::VectorXd pu_purchase_costs, Eigen::VectorXd pu_purchase_locked_in, Eigen::VectorXd pu_purchase_locked_out, Eigen::VectorXi obj_fun_target, double total_budget);
RcppExport SEXP _surveyvoi_rcpp_expected_value_of_decision_given_survey_scheme(SEXP pijSEXP, SEXP survey_featuresSEXP, SEXP survey_sensitivitySEXP, SEXP survey_specificitySEXP, SEXP pu_survey_solutionSEXP, SEXP pu_survey_costsSEXP, SEXP pu_purchase_costsSEXP, SEXP pu_purchase_locked_inSEXP, SEXP pu_purchase_locked_outSEXP, SEXP obj_fun_targetSEXP, SEXP total_budgetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type pij(pijSEXP);
    Rcpp::traits::input_parameter< std::vector<bool> >::type survey_features(survey_featuresSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type survey_sensitivity(survey_sensitivitySEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type survey_specificity(survey_specificitySEXP);
    Rcpp::traits::input_parameter< std::vector<bool> >::type pu_survey_solution(pu_survey_solutionSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type pu_survey_costs(pu_survey_costsSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type pu_purchase_costs(pu_purchase_costsSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type pu_purchase_locked_in(pu_purchase_locked_inSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type pu_purchase_locked_out(pu_purchase_locked_outSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXi >::type obj_fun_target(obj_fun_targetSEXP);
    Rcpp::traits::input_parameter< double >::type total_budget(total_budgetSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_expected_value_of_decision_given_survey_scheme(pij, survey_features, survey_sensitivity, survey_specificity, pu_survey_solution, pu_survey_costs, pu_purchase_costs, pu_purchase_locked_in, pu_purchase_locked_out, obj_fun_target, total_budget));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_feasible_actions_ilp_matrix
Rcpp::NumericMatrix rcpp_feasible_actions_ilp_matrix(Rcpp::NumericMatrix x);
RcppExport SEXP _surveyvoi_rcpp_feasible_actions_ilp_matrix(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_feasible_actions_ilp_matrix(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_greedy_heuristic_prioritization
Rcpp::List rcpp_greedy_heuristic_prioritization(Eigen::MatrixXd rij, Eigen::VectorXd pu_costs, Eigen::VectorXd pu_locked_in, Eigen::VectorXd pu_locked_out, Eigen::VectorXi target, double budget);
RcppExport SEXP _surveyvoi_rcpp_greedy_heuristic_prioritization(SEXP rijSEXP, SEXP pu_costsSEXP, SEXP pu_locked_inSEXP, SEXP pu_locked_outSEXP, SEXP targetSEXP, SEXP budgetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type rij(rijSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type pu_costs(pu_costsSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type pu_locked_in(pu_locked_inSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type pu_locked_out(pu_locked_outSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXi >::type target(targetSEXP);
    Rcpp::traits::input_parameter< double >::type budget(budgetSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_greedy_heuristic_prioritization(rij, pu_costs, pu_locked_in, pu_locked_out, target, budget));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_model_performance
Rcpp::NumericVector rcpp_model_performance(Eigen::VectorXd y, Eigen::VectorXd yhat, Eigen::VectorXd w, double data_sens, double data_spec);
RcppExport SEXP _surveyvoi_rcpp_model_performance(SEXP ySEXP, SEXP yhatSEXP, SEXP wSEXP, SEXP data_sensSEXP, SEXP data_specSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type y(ySEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type yhat(yhatSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type w(wSEXP);
    Rcpp::traits::input_parameter< double >::type data_sens(data_sensSEXP);
    Rcpp::traits::input_parameter< double >::type data_spec(data_specSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_model_performance(y, yhat, w, data_sens, data_spec));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_formula_sensitivity_and_specificity
Rcpp::NumericVector rcpp_formula_sensitivity_and_specificity(Rcpp::NumericMatrix x, double data_sens, double data_spec);
RcppExport SEXP _surveyvoi_rcpp_formula_sensitivity_and_specificity(SEXP xSEXP, SEXP data_sensSEXP, SEXP data_specSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type data_sens(data_sensSEXP);
    Rcpp::traits::input_parameter< double >::type data_spec(data_specSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_formula_sensitivity_and_specificity(x, data_sens, data_spec));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_maxlik_sensitivity_and_specificity
Rcpp::NumericVector rcpp_maxlik_sensitivity_and_specificity(Rcpp::NumericMatrix x, double data_sens, double data_spec);
RcppExport SEXP _surveyvoi_rcpp_maxlik_sensitivity_and_specificity(SEXP xSEXP, SEXP data_sensSEXP, SEXP data_specSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type data_sens(data_sensSEXP);
    Rcpp::traits::input_parameter< double >::type data_spec(data_specSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_maxlik_sensitivity_and_specificity(x, data_sens, data_spec));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_pmedian_constraint_matrix
Rcpp::List rcpp_pmedian_constraint_matrix(Eigen::MatrixXd x, Rcpp::NumericVector costs);
RcppExport SEXP _surveyvoi_rcpp_pmedian_constraint_matrix(SEXP xSEXP, SEXP costsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type costs(costsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_pmedian_constraint_matrix(x, costs));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_total_probability_of_positive_result
Eigen::MatrixXd rcpp_total_probability_of_positive_result(Eigen::MatrixXd prior, Eigen::VectorXd sensitivity, Eigen::VectorXd specificity);
RcppExport SEXP _surveyvoi_rcpp_total_probability_of_positive_result(SEXP priorSEXP, SEXP sensitivitySEXP, SEXP specificitySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type prior(priorSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type sensitivity(sensitivitySEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type specificity(specificitySEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_total_probability_of_positive_result(prior, sensitivity, specificity));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_total_probability_of_negative_result
Eigen::MatrixXd rcpp_total_probability_of_negative_result(Eigen::MatrixXd prior, Eigen::VectorXd sensitivity, Eigen::VectorXd specificity);
RcppExport SEXP _surveyvoi_rcpp_total_probability_of_negative_result(SEXP priorSEXP, SEXP sensitivitySEXP, SEXP specificitySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type prior(priorSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type sensitivity(sensitivitySEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type specificity(specificitySEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_total_probability_of_negative_result(prior, sensitivity, specificity));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_probability_of_outcome
double rcpp_probability_of_outcome(Eigen::MatrixXd oij, Eigen::MatrixXd total_probability_of_survey_positive, Eigen::MatrixXd total_probability_of_survey_negative, std::vector<std::size_t> idx);
RcppExport SEXP _surveyvoi_rcpp_probability_of_outcome(SEXP oijSEXP, SEXP total_probability_of_survey_positiveSEXP, SEXP total_probability_of_survey_negativeSEXP, SEXP idxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type oij(oijSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type total_probability_of_survey_positive(total_probability_of_survey_positiveSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type total_probability_of_survey_negative(total_probability_of_survey_negativeSEXP);
    Rcpp::traits::input_parameter< std::vector<std::size_t> >::type idx(idxSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_probability_of_outcome(oij, total_probability_of_survey_positive, total_probability_of_survey_negative, idx));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_probability_of_state
double rcpp_probability_of_state(Eigen::MatrixXd sij, Eigen::MatrixXd pij);
RcppExport SEXP _surveyvoi_rcpp_probability_of_state(SEXP sijSEXP, SEXP pijSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type sij(sijSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type pij(pijSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_probability_of_state(sij, pij));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_sample_n_weighted_states_with_replacement
std::vector<std::size_t> rcpp_sample_n_weighted_states_with_replacement(std::size_t k, Eigen::MatrixXd& pij, int seed);
RcppExport SEXP _surveyvoi_rcpp_sample_n_weighted_states_with_replacement(SEXP kSEXP, SEXP pijSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::size_t >::type k(kSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd& >::type pij(pijSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_sample_n_weighted_states_with_replacement(k, pij, seed));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_sample_n_uniform_states_with_replacement
std::vector<std::size_t> rcpp_sample_n_uniform_states_with_replacement(std::size_t k, Eigen::MatrixXd& pij, int seed);
RcppExport SEXP _surveyvoi_rcpp_sample_n_uniform_states_with_replacement(SEXP kSEXP, SEXP pijSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::size_t >::type k(kSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd& >::type pij(pijSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_sample_n_uniform_states_with_replacement(k, pij, seed));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_sample_n_uniform_states_without_replacement
std::vector<std::size_t> rcpp_sample_n_uniform_states_without_replacement(std::size_t k, Eigen::MatrixXd& pij, int seed);
RcppExport SEXP _surveyvoi_rcpp_sample_n_uniform_states_without_replacement(SEXP kSEXP, SEXP pijSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::size_t >::type k(kSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd& >::type pij(pijSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_sample_n_uniform_states_without_replacement(k, pij, seed));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_sample_n_weighted_states_without_replacement
std::vector<std::size_t> rcpp_sample_n_weighted_states_without_replacement(std::size_t k, Eigen::MatrixXd& pij, int seed);
RcppExport SEXP _surveyvoi_rcpp_sample_n_weighted_states_without_replacement(SEXP kSEXP, SEXP pijSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::size_t >::type k(kSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd& >::type pij(pijSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_sample_n_weighted_states_without_replacement(k, pij, seed));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_nth_state_sparse
Eigen::MatrixXd rcpp_nth_state_sparse(std::size_t n, std::vector<std::size_t> idx, Eigen::MatrixXd matrix);
RcppExport SEXP _surveyvoi_rcpp_nth_state_sparse(SEXP nSEXP, SEXP idxSEXP, SEXP matrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::size_t >::type n(nSEXP);
    Rcpp::traits::input_parameter< std::vector<std::size_t> >::type idx(idxSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type matrix(matrixSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_nth_state_sparse(n, idx, matrix));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_nth_state
Eigen::MatrixXd rcpp_nth_state(std::size_t n, Eigen::MatrixXd matrix);
RcppExport SEXP _surveyvoi_rcpp_nth_state(SEXP nSEXP, SEXP matrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::size_t >::type n(nSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type matrix(matrixSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_nth_state(n, matrix));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_n_states
std::size_t rcpp_n_states(std::size_t n);
RcppExport SEXP _surveyvoi_rcpp_n_states(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::size_t >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_n_states(n));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_which_state_sparse
std::size_t rcpp_which_state_sparse(Eigen::MatrixXd matrix, std::vector<std::size_t> idx);
RcppExport SEXP _surveyvoi_rcpp_which_state_sparse(SEXP matrixSEXP, SEXP idxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type matrix(matrixSEXP);
    Rcpp::traits::input_parameter< std::vector<std::size_t> >::type idx(idxSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_which_state_sparse(matrix, idx));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_which_state
std::size_t rcpp_which_state(Eigen::MatrixXd matrix);
RcppExport SEXP _surveyvoi_rcpp_which_state(SEXP matrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type matrix(matrixSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_which_state(matrix));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_update_posterior_probability_matrix
Eigen::MatrixXd rcpp_update_posterior_probability_matrix(Eigen::MatrixXd pij, Eigen::MatrixXd oij, std::vector<bool> survey_features, Eigen::VectorXd survey_sensitivity, Eigen::VectorXd survey_specificity, std::vector<bool> pu_survey_solution);
RcppExport SEXP _surveyvoi_rcpp_update_posterior_probability_matrix(SEXP pijSEXP, SEXP oijSEXP, SEXP survey_featuresSEXP, SEXP survey_sensitivitySEXP, SEXP survey_specificitySEXP, SEXP pu_survey_solutionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type pij(pijSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type oij(oijSEXP);
    Rcpp::traits::input_parameter< std::vector<bool> >::type survey_features(survey_featuresSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type survey_sensitivity(survey_sensitivitySEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type survey_specificity(survey_specificitySEXP);
    Rcpp::traits::input_parameter< std::vector<bool> >::type pu_survey_solution(pu_survey_solutionSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_update_posterior_probability_matrix(pij, oij, survey_features, survey_sensitivity, survey_specificity, pu_survey_solution));
    return rcpp_result_gen;
END_RCPP
}
