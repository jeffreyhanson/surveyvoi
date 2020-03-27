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
// rcpp_approx_expected_value_of_action
double rcpp_approx_expected_value_of_action(std::vector<bool> solution, Eigen::MatrixXd pij, Eigen::VectorXd alpha, Eigen::VectorXd gamma, std::vector<std::size_t> states);
RcppExport SEXP _surveyvoi_rcpp_approx_expected_value_of_action(SEXP solutionSEXP, SEXP pijSEXP, SEXP alphaSEXP, SEXP gammaSEXP, SEXP statesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<bool> >::type solution(solutionSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type pij(pijSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< std::vector<std::size_t> >::type states(statesSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_approx_expected_value_of_action(solution, pij, alpha, gamma, states));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_approx_expected_value_of_decision_given_current_info_n_states
Rcpp::NumericVector rcpp_approx_expected_value_of_decision_given_current_info_n_states(Eigen::MatrixXd& pij, Eigen::VectorXd& pu_costs, Eigen::VectorXd& pu_locked_in, Eigen::VectorXd& alpha, Eigen::VectorXd& gamma, std::size_t n_approx_obj_fun_points, double budget, double gap, std::size_t n_approx_replicates, std::size_t n_approx_states_per_replicate);
RcppExport SEXP _surveyvoi_rcpp_approx_expected_value_of_decision_given_current_info_n_states(SEXP pijSEXP, SEXP pu_costsSEXP, SEXP pu_locked_inSEXP, SEXP alphaSEXP, SEXP gammaSEXP, SEXP n_approx_obj_fun_pointsSEXP, SEXP budgetSEXP, SEXP gapSEXP, SEXP n_approx_replicatesSEXP, SEXP n_approx_states_per_replicateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd& >::type pij(pijSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd& >::type pu_costs(pu_costsSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd& >::type pu_locked_in(pu_locked_inSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd& >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd& >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type n_approx_obj_fun_points(n_approx_obj_fun_pointsSEXP);
    Rcpp::traits::input_parameter< double >::type budget(budgetSEXP);
    Rcpp::traits::input_parameter< double >::type gap(gapSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type n_approx_replicates(n_approx_replicatesSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type n_approx_states_per_replicate(n_approx_states_per_replicateSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_approx_expected_value_of_decision_given_current_info_n_states(pij, pu_costs, pu_locked_in, alpha, gamma, n_approx_obj_fun_points, budget, gap, n_approx_replicates, n_approx_states_per_replicate));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_approx_expected_value_of_decision_given_current_info_fixed_states
double rcpp_approx_expected_value_of_decision_given_current_info_fixed_states(Eigen::MatrixXd& pij, Eigen::VectorXd& pu_costs, Eigen::VectorXd& pu_locked_in, Eigen::VectorXd& alpha, Eigen::VectorXd& gamma, std::size_t n_approx_obj_fun_points, double budget, double gap, std::vector<std::size_t> states);
RcppExport SEXP _surveyvoi_rcpp_approx_expected_value_of_decision_given_current_info_fixed_states(SEXP pijSEXP, SEXP pu_costsSEXP, SEXP pu_locked_inSEXP, SEXP alphaSEXP, SEXP gammaSEXP, SEXP n_approx_obj_fun_pointsSEXP, SEXP budgetSEXP, SEXP gapSEXP, SEXP statesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd& >::type pij(pijSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd& >::type pu_costs(pu_costsSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd& >::type pu_locked_in(pu_locked_inSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd& >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd& >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type n_approx_obj_fun_points(n_approx_obj_fun_pointsSEXP);
    Rcpp::traits::input_parameter< double >::type budget(budgetSEXP);
    Rcpp::traits::input_parameter< double >::type gap(gapSEXP);
    Rcpp::traits::input_parameter< std::vector<std::size_t> >::type states(statesSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_approx_expected_value_of_decision_given_current_info_fixed_states(pij, pu_costs, pu_locked_in, alpha, gamma, n_approx_obj_fun_points, budget, gap, states));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_approx_expected_value_of_decision_given_perfect_info_n_states
Rcpp::NumericVector rcpp_approx_expected_value_of_decision_given_perfect_info_n_states(Eigen::MatrixXd& pij, Eigen::VectorXd& pu_costs, Eigen::VectorXd& pu_locked_in, Eigen::VectorXd& alpha, Eigen::VectorXd& gamma, std::size_t n_approx_obj_fun_points, double budget, double gap, std::size_t n_approx_replicates, std::size_t n_approx_states_per_replicate);
RcppExport SEXP _surveyvoi_rcpp_approx_expected_value_of_decision_given_perfect_info_n_states(SEXP pijSEXP, SEXP pu_costsSEXP, SEXP pu_locked_inSEXP, SEXP alphaSEXP, SEXP gammaSEXP, SEXP n_approx_obj_fun_pointsSEXP, SEXP budgetSEXP, SEXP gapSEXP, SEXP n_approx_replicatesSEXP, SEXP n_approx_states_per_replicateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd& >::type pij(pijSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd& >::type pu_costs(pu_costsSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd& >::type pu_locked_in(pu_locked_inSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd& >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd& >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type n_approx_obj_fun_points(n_approx_obj_fun_pointsSEXP);
    Rcpp::traits::input_parameter< double >::type budget(budgetSEXP);
    Rcpp::traits::input_parameter< double >::type gap(gapSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type n_approx_replicates(n_approx_replicatesSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type n_approx_states_per_replicate(n_approx_states_per_replicateSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_approx_expected_value_of_decision_given_perfect_info_n_states(pij, pu_costs, pu_locked_in, alpha, gamma, n_approx_obj_fun_points, budget, gap, n_approx_replicates, n_approx_states_per_replicate));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_approx_expected_value_of_decision_given_perfect_info_fixed_states
double rcpp_approx_expected_value_of_decision_given_perfect_info_fixed_states(Eigen::MatrixXd& pij, Eigen::VectorXd& pu_costs, Eigen::VectorXd& pu_locked_in, Eigen::VectorXd& alpha, Eigen::VectorXd& gamma, std::size_t n_approx_obj_fun_points, double budget, double gap, std::vector<std::size_t> states);
RcppExport SEXP _surveyvoi_rcpp_approx_expected_value_of_decision_given_perfect_info_fixed_states(SEXP pijSEXP, SEXP pu_costsSEXP, SEXP pu_locked_inSEXP, SEXP alphaSEXP, SEXP gammaSEXP, SEXP n_approx_obj_fun_pointsSEXP, SEXP budgetSEXP, SEXP gapSEXP, SEXP statesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd& >::type pij(pijSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd& >::type pu_costs(pu_costsSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd& >::type pu_locked_in(pu_locked_inSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd& >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd& >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type n_approx_obj_fun_points(n_approx_obj_fun_pointsSEXP);
    Rcpp::traits::input_parameter< double >::type budget(budgetSEXP);
    Rcpp::traits::input_parameter< double >::type gap(gapSEXP);
    Rcpp::traits::input_parameter< std::vector<std::size_t> >::type states(statesSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_approx_expected_value_of_decision_given_perfect_info_fixed_states(pij, pu_costs, pu_locked_in, alpha, gamma, n_approx_obj_fun_points, budget, gap, states));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_approx_expected_value_of_decision_given_survey_scheme_n_states
Rcpp::NumericVector rcpp_approx_expected_value_of_decision_given_survey_scheme_n_states(Eigen::MatrixXd rij, Eigen::MatrixXd pij, Eigen::MatrixXd wij, std::vector<bool> survey_features, Eigen::VectorXd survey_sensitivity, Eigen::VectorXd survey_specificity, std::vector<bool> pu_survey_solution, Eigen::VectorXd pu_survey_status, Eigen::VectorXd pu_survey_costs, Eigen::VectorXd pu_purchase_costs, Eigen::VectorXd pu_purchase_locked_in, Eigen::MatrixXf pu_env_data, Rcpp::List xgb_parameters, Rcpp::List xgb_train_folds, Rcpp::List xgb_test_folds, std::vector<std::size_t> n_xgb_nrounds, Eigen::VectorXd obj_fun_alpha, Eigen::VectorXd obj_fun_gamma, std::size_t n_approx_obj_fun_points, double total_budget, double optim_gap, std::size_t n_approx_replicates, std::size_t n_approx_states_per_replicate);
RcppExport SEXP _surveyvoi_rcpp_approx_expected_value_of_decision_given_survey_scheme_n_states(SEXP rijSEXP, SEXP pijSEXP, SEXP wijSEXP, SEXP survey_featuresSEXP, SEXP survey_sensitivitySEXP, SEXP survey_specificitySEXP, SEXP pu_survey_solutionSEXP, SEXP pu_survey_statusSEXP, SEXP pu_survey_costsSEXP, SEXP pu_purchase_costsSEXP, SEXP pu_purchase_locked_inSEXP, SEXP pu_env_dataSEXP, SEXP xgb_parametersSEXP, SEXP xgb_train_foldsSEXP, SEXP xgb_test_foldsSEXP, SEXP n_xgb_nroundsSEXP, SEXP obj_fun_alphaSEXP, SEXP obj_fun_gammaSEXP, SEXP n_approx_obj_fun_pointsSEXP, SEXP total_budgetSEXP, SEXP optim_gapSEXP, SEXP n_approx_replicatesSEXP, SEXP n_approx_states_per_replicateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type rij(rijSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type pij(pijSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type wij(wijSEXP);
    Rcpp::traits::input_parameter< std::vector<bool> >::type survey_features(survey_featuresSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type survey_sensitivity(survey_sensitivitySEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type survey_specificity(survey_specificitySEXP);
    Rcpp::traits::input_parameter< std::vector<bool> >::type pu_survey_solution(pu_survey_solutionSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type pu_survey_status(pu_survey_statusSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type pu_survey_costs(pu_survey_costsSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type pu_purchase_costs(pu_purchase_costsSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type pu_purchase_locked_in(pu_purchase_locked_inSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXf >::type pu_env_data(pu_env_dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type xgb_parameters(xgb_parametersSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type xgb_train_folds(xgb_train_foldsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type xgb_test_folds(xgb_test_foldsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::size_t> >::type n_xgb_nrounds(n_xgb_nroundsSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type obj_fun_alpha(obj_fun_alphaSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type obj_fun_gamma(obj_fun_gammaSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type n_approx_obj_fun_points(n_approx_obj_fun_pointsSEXP);
    Rcpp::traits::input_parameter< double >::type total_budget(total_budgetSEXP);
    Rcpp::traits::input_parameter< double >::type optim_gap(optim_gapSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type n_approx_replicates(n_approx_replicatesSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type n_approx_states_per_replicate(n_approx_states_per_replicateSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_approx_expected_value_of_decision_given_survey_scheme_n_states(rij, pij, wij, survey_features, survey_sensitivity, survey_specificity, pu_survey_solution, pu_survey_status, pu_survey_costs, pu_purchase_costs, pu_purchase_locked_in, pu_env_data, xgb_parameters, xgb_train_folds, xgb_test_folds, n_xgb_nrounds, obj_fun_alpha, obj_fun_gamma, n_approx_obj_fun_points, total_budget, optim_gap, n_approx_replicates, n_approx_states_per_replicate));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_expected_value_of_action
double rcpp_expected_value_of_action(std::vector<bool> solution, Eigen::MatrixXd pij, Eigen::VectorXd alpha, Eigen::VectorXd gamma);
RcppExport SEXP _surveyvoi_rcpp_expected_value_of_action(SEXP solutionSEXP, SEXP pijSEXP, SEXP alphaSEXP, SEXP gammaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<bool> >::type solution(solutionSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type pij(pijSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type gamma(gammaSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_expected_value_of_action(solution, pij, alpha, gamma));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_expected_value_of_decision_given_current_info
double rcpp_expected_value_of_decision_given_current_info(Eigen::MatrixXd& pij, Eigen::VectorXd& pu_costs, Eigen::VectorXd& pu_locked_in, Eigen::VectorXd& alpha, Eigen::VectorXd& gamma, std::size_t n_approx_obj_fun_points, double budget, double gap);
RcppExport SEXP _surveyvoi_rcpp_expected_value_of_decision_given_current_info(SEXP pijSEXP, SEXP pu_costsSEXP, SEXP pu_locked_inSEXP, SEXP alphaSEXP, SEXP gammaSEXP, SEXP n_approx_obj_fun_pointsSEXP, SEXP budgetSEXP, SEXP gapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd& >::type pij(pijSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd& >::type pu_costs(pu_costsSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd& >::type pu_locked_in(pu_locked_inSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd& >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd& >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type n_approx_obj_fun_points(n_approx_obj_fun_pointsSEXP);
    Rcpp::traits::input_parameter< double >::type budget(budgetSEXP);
    Rcpp::traits::input_parameter< double >::type gap(gapSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_expected_value_of_decision_given_current_info(pij, pu_costs, pu_locked_in, alpha, gamma, n_approx_obj_fun_points, budget, gap));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_expected_value_of_decision_given_perfect_info
double rcpp_expected_value_of_decision_given_perfect_info(Eigen::MatrixXd& pij, Eigen::VectorXd& pu_costs, Eigen::VectorXd& pu_locked_in, Eigen::VectorXd& alpha, Eigen::VectorXd& gamma, std::size_t n_approx_obj_fun_points, double budget, double gap);
RcppExport SEXP _surveyvoi_rcpp_expected_value_of_decision_given_perfect_info(SEXP pijSEXP, SEXP pu_costsSEXP, SEXP pu_locked_inSEXP, SEXP alphaSEXP, SEXP gammaSEXP, SEXP n_approx_obj_fun_pointsSEXP, SEXP budgetSEXP, SEXP gapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd& >::type pij(pijSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd& >::type pu_costs(pu_costsSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd& >::type pu_locked_in(pu_locked_inSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd& >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd& >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type n_approx_obj_fun_points(n_approx_obj_fun_pointsSEXP);
    Rcpp::traits::input_parameter< double >::type budget(budgetSEXP);
    Rcpp::traits::input_parameter< double >::type gap(gapSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_expected_value_of_decision_given_perfect_info(pij, pu_costs, pu_locked_in, alpha, gamma, n_approx_obj_fun_points, budget, gap));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_expected_value_of_decision_given_survey_scheme
double rcpp_expected_value_of_decision_given_survey_scheme(Eigen::MatrixXd rij, Eigen::MatrixXd pij, Eigen::MatrixXd wij, std::vector<bool> survey_features, Eigen::VectorXd survey_sensitivity, Eigen::VectorXd survey_specificity, std::vector<bool> pu_survey_solution, Eigen::VectorXd pu_survey_status, Eigen::VectorXd pu_survey_costs, Eigen::VectorXd pu_purchase_costs, Eigen::VectorXd pu_purchase_locked_in, Eigen::MatrixXf pu_env_data, Rcpp::List xgb_parameters, Rcpp::List xgb_train_folds, Rcpp::List xgb_test_folds, std::vector<std::size_t> n_xgb_nrounds, Eigen::VectorXd obj_fun_alpha, Eigen::VectorXd obj_fun_gamma, std::size_t n_approx_obj_fun_points, double total_budget, double optim_gap);
RcppExport SEXP _surveyvoi_rcpp_expected_value_of_decision_given_survey_scheme(SEXP rijSEXP, SEXP pijSEXP, SEXP wijSEXP, SEXP survey_featuresSEXP, SEXP survey_sensitivitySEXP, SEXP survey_specificitySEXP, SEXP pu_survey_solutionSEXP, SEXP pu_survey_statusSEXP, SEXP pu_survey_costsSEXP, SEXP pu_purchase_costsSEXP, SEXP pu_purchase_locked_inSEXP, SEXP pu_env_dataSEXP, SEXP xgb_parametersSEXP, SEXP xgb_train_foldsSEXP, SEXP xgb_test_foldsSEXP, SEXP n_xgb_nroundsSEXP, SEXP obj_fun_alphaSEXP, SEXP obj_fun_gammaSEXP, SEXP n_approx_obj_fun_pointsSEXP, SEXP total_budgetSEXP, SEXP optim_gapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type rij(rijSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type pij(pijSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type wij(wijSEXP);
    Rcpp::traits::input_parameter< std::vector<bool> >::type survey_features(survey_featuresSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type survey_sensitivity(survey_sensitivitySEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type survey_specificity(survey_specificitySEXP);
    Rcpp::traits::input_parameter< std::vector<bool> >::type pu_survey_solution(pu_survey_solutionSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type pu_survey_status(pu_survey_statusSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type pu_survey_costs(pu_survey_costsSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type pu_purchase_costs(pu_purchase_costsSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type pu_purchase_locked_in(pu_purchase_locked_inSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXf >::type pu_env_data(pu_env_dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type xgb_parameters(xgb_parametersSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type xgb_train_folds(xgb_train_foldsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type xgb_test_folds(xgb_test_foldsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::size_t> >::type n_xgb_nrounds(n_xgb_nroundsSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type obj_fun_alpha(obj_fun_alphaSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type obj_fun_gamma(obj_fun_gammaSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type n_approx_obj_fun_points(n_approx_obj_fun_pointsSEXP);
    Rcpp::traits::input_parameter< double >::type total_budget(total_budgetSEXP);
    Rcpp::traits::input_parameter< double >::type optim_gap(optim_gapSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_expected_value_of_decision_given_survey_scheme(rij, pij, wij, survey_features, survey_sensitivity, survey_specificity, pu_survey_solution, pu_survey_status, pu_survey_costs, pu_purchase_costs, pu_purchase_locked_in, pu_env_data, xgb_parameters, xgb_train_folds, xgb_test_folds, n_xgb_nrounds, obj_fun_alpha, obj_fun_gamma, n_approx_obj_fun_points, total_budget, optim_gap));
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
// rcpp_posterior_probability_matrix
Eigen::MatrixXd rcpp_posterior_probability_matrix(Eigen::MatrixXd rij, Eigen::MatrixXd pij, Eigen::MatrixXd oij, std::vector<bool> pu_survey_solution, std::vector<bool> survey_features, Eigen::VectorXd survey_sensitivity, Eigen::VectorXd survey_specificity, Eigen::VectorXd model_sensitivity, Eigen::VectorXd model_specificity);
RcppExport SEXP _surveyvoi_rcpp_posterior_probability_matrix(SEXP rijSEXP, SEXP pijSEXP, SEXP oijSEXP, SEXP pu_survey_solutionSEXP, SEXP survey_featuresSEXP, SEXP survey_sensitivitySEXP, SEXP survey_specificitySEXP, SEXP model_sensitivitySEXP, SEXP model_specificitySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type rij(rijSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type pij(pijSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type oij(oijSEXP);
    Rcpp::traits::input_parameter< std::vector<bool> >::type pu_survey_solution(pu_survey_solutionSEXP);
    Rcpp::traits::input_parameter< std::vector<bool> >::type survey_features(survey_featuresSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type survey_sensitivity(survey_sensitivitySEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type survey_specificity(survey_specificitySEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type model_sensitivity(model_sensitivitySEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type model_specificity(model_specificitySEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_posterior_probability_matrix(rij, pij, oij, pu_survey_solution, survey_features, survey_sensitivity, survey_specificity, model_sensitivity, model_specificity));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_predict_missing_rij_data
Eigen::MatrixXd rcpp_predict_missing_rij_data(Eigen::MatrixXd rij, Eigen::MatrixXd wij, Eigen::MatrixXf pu_env_data_raw, std::vector<bool> survey_features, std::vector<std::size_t> pu_model_prediction_idx, Rcpp::List xgb_parameters, std::vector<std::size_t> n_xgb_nrounds, Rcpp::List xgb_train_folds, Rcpp::List xgb_test_folds);
RcppExport SEXP _surveyvoi_rcpp_predict_missing_rij_data(SEXP rijSEXP, SEXP wijSEXP, SEXP pu_env_data_rawSEXP, SEXP survey_featuresSEXP, SEXP pu_model_prediction_idxSEXP, SEXP xgb_parametersSEXP, SEXP n_xgb_nroundsSEXP, SEXP xgb_train_foldsSEXP, SEXP xgb_test_foldsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type rij(rijSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type wij(wijSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXf >::type pu_env_data_raw(pu_env_data_rawSEXP);
    Rcpp::traits::input_parameter< std::vector<bool> >::type survey_features(survey_featuresSEXP);
    Rcpp::traits::input_parameter< std::vector<std::size_t> >::type pu_model_prediction_idx(pu_model_prediction_idxSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type xgb_parameters(xgb_parametersSEXP);
    Rcpp::traits::input_parameter< std::vector<std::size_t> >::type n_xgb_nrounds(n_xgb_nroundsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type xgb_train_folds(xgb_train_foldsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type xgb_test_folds(xgb_test_foldsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_predict_missing_rij_data(rij, wij, pu_env_data_raw, survey_features, pu_model_prediction_idx, xgb_parameters, n_xgb_nrounds, xgb_train_folds, xgb_test_folds));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_prioritization
Rcpp::List rcpp_prioritization(Eigen::MatrixXd rij, Eigen::VectorXd pu_costs, Eigen::VectorXd pu_locked_in, Eigen::VectorXd alpha, Eigen::VectorXd gamma, std::size_t n_approx_obj_fun_points, double budget, double gap, std::string file_path);
RcppExport SEXP _surveyvoi_rcpp_prioritization(SEXP rijSEXP, SEXP pu_costsSEXP, SEXP pu_locked_inSEXP, SEXP alphaSEXP, SEXP gammaSEXP, SEXP n_approx_obj_fun_pointsSEXP, SEXP budgetSEXP, SEXP gapSEXP, SEXP file_pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type rij(rijSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type pu_costs(pu_costsSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type pu_locked_in(pu_locked_inSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type n_approx_obj_fun_points(n_approx_obj_fun_pointsSEXP);
    Rcpp::traits::input_parameter< double >::type budget(budgetSEXP);
    Rcpp::traits::input_parameter< double >::type gap(gapSEXP);
    Rcpp::traits::input_parameter< std::string >::type file_path(file_pathSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_prioritization(rij, pu_costs, pu_locked_in, alpha, gamma, n_approx_obj_fun_points, budget, gap, file_path));
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
// rcpp_total_probability_of_positive_model_result
Eigen::MatrixXd rcpp_total_probability_of_positive_model_result(Eigen::MatrixXd prior, Eigen::MatrixXd sensitivity, Eigen::MatrixXd specificity, std::vector<std::size_t> feature_outcome_idx);
RcppExport SEXP _surveyvoi_rcpp_total_probability_of_positive_model_result(SEXP priorSEXP, SEXP sensitivitySEXP, SEXP specificitySEXP, SEXP feature_outcome_idxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type prior(priorSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type sensitivity(sensitivitySEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type specificity(specificitySEXP);
    Rcpp::traits::input_parameter< std::vector<std::size_t> >::type feature_outcome_idx(feature_outcome_idxSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_total_probability_of_positive_model_result(prior, sensitivity, specificity, feature_outcome_idx));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_total_probability_of_negative_model_result
Eigen::MatrixXd rcpp_total_probability_of_negative_model_result(Eigen::MatrixXd prior, Eigen::MatrixXd sensitivity, Eigen::MatrixXd specificity, std::vector<std::size_t> feature_outcome_idx);
RcppExport SEXP _surveyvoi_rcpp_total_probability_of_negative_model_result(SEXP priorSEXP, SEXP sensitivitySEXP, SEXP specificitySEXP, SEXP feature_outcome_idxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type prior(priorSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type sensitivity(sensitivitySEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type specificity(specificitySEXP);
    Rcpp::traits::input_parameter< std::vector<std::size_t> >::type feature_outcome_idx(feature_outcome_idxSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_total_probability_of_negative_model_result(prior, sensitivity, specificity, feature_outcome_idx));
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
// rcpp_sample_k_weighted_nth_states
std::vector<std::size_t> rcpp_sample_k_weighted_nth_states(std::size_t k, Eigen::MatrixXd& pij);
RcppExport SEXP _surveyvoi_rcpp_sample_k_weighted_nth_states(SEXP kSEXP, SEXP pijSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::size_t >::type k(kSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd& >::type pij(pijSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_sample_k_weighted_nth_states(k, pij));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_sample_k_uniform_nth_states
std::vector<std::size_t> rcpp_sample_k_uniform_nth_states(std::size_t k, Eigen::MatrixXd& pij);
RcppExport SEXP _surveyvoi_rcpp_sample_k_uniform_nth_states(SEXP kSEXP, SEXP pijSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::size_t >::type k(kSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd& >::type pij(pijSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_sample_k_uniform_nth_states(k, pij));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_sample_k_uniform_no_replacement_nth_states
std::vector<std::size_t> rcpp_sample_k_uniform_no_replacement_nth_states(std::size_t k, Eigen::MatrixXd& pij);
RcppExport SEXP _surveyvoi_rcpp_sample_k_uniform_no_replacement_nth_states(SEXP kSEXP, SEXP pijSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::size_t >::type k(kSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd& >::type pij(pijSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_sample_k_uniform_no_replacement_nth_states(k, pij));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_fit_xgboost_models_and_assess_performance
Rcpp::List rcpp_fit_xgboost_models_and_assess_performance(Eigen::MatrixXd rij, Eigen::MatrixXd wij, Eigen::MatrixXf pu_env_data_raw, std::vector<bool> survey_features, Rcpp::List xgb_parameters, std::vector<std::size_t> n_xgb_nrounds, Rcpp::List xgb_train_folds, Rcpp::List xgb_test_folds);
RcppExport SEXP _surveyvoi_rcpp_fit_xgboost_models_and_assess_performance(SEXP rijSEXP, SEXP wijSEXP, SEXP pu_env_data_rawSEXP, SEXP survey_featuresSEXP, SEXP xgb_parametersSEXP, SEXP n_xgb_nroundsSEXP, SEXP xgb_train_foldsSEXP, SEXP xgb_test_foldsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type rij(rijSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type wij(wijSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXf >::type pu_env_data_raw(pu_env_data_rawSEXP);
    Rcpp::traits::input_parameter< std::vector<bool> >::type survey_features(survey_featuresSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type xgb_parameters(xgb_parametersSEXP);
    Rcpp::traits::input_parameter< std::vector<std::size_t> >::type n_xgb_nrounds(n_xgb_nroundsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type xgb_train_folds(xgb_train_foldsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type xgb_test_folds(xgb_test_foldsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_fit_xgboost_models_and_assess_performance(rij, wij, pu_env_data_raw, survey_features, xgb_parameters, n_xgb_nrounds, xgb_train_folds, xgb_test_folds));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_xgboost
Eigen::VectorXf rcpp_xgboost(Eigen::VectorXf y, Eigen::MatrixXf train_x_raw, Eigen::MatrixXf predict_x_raw, Rcpp::List xgb_parameters, std::size_t n_xgb_nrounds);
RcppExport SEXP _surveyvoi_rcpp_xgboost(SEXP ySEXP, SEXP train_x_rawSEXP, SEXP predict_x_rawSEXP, SEXP xgb_parametersSEXP, SEXP n_xgb_nroundsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::VectorXf >::type y(ySEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXf >::type train_x_raw(train_x_rawSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXf >::type predict_x_raw(predict_x_rawSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type xgb_parameters(xgb_parametersSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type n_xgb_nrounds(n_xgb_nroundsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_xgboost(y, train_x_raw, predict_x_raw, xgb_parameters, n_xgb_nrounds));
    return rcpp_result_gen;
END_RCPP
}
