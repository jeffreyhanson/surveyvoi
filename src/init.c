#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME: 
   Check these declarations against the C/Fortran source code.
*/

/* .Call calls */
extern SEXP _surveyvoi_rcpp_approx_expected_value_of_decision_given_survey_scheme(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _surveyvoi_rcpp_expected_value_of_action(SEXP, SEXP, SEXP);
extern SEXP _surveyvoi_rcpp_expected_value_of_decision_given_current_info(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _surveyvoi_rcpp_expected_value_of_decision_given_survey_scheme(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _surveyvoi_rcpp_feasible_actions_ilp_matrix(SEXP);
extern SEXP _surveyvoi_rcpp_formula_sensitivity_and_specificity(SEXP, SEXP, SEXP);
extern SEXP _surveyvoi_rcpp_greedy_heuristic_prioritization(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _surveyvoi_rcpp_log_sum(SEXP);
extern SEXP _surveyvoi_rcpp_maxlik_sensitivity_and_specificity(SEXP, SEXP, SEXP);
extern SEXP _surveyvoi_rcpp_model_performance(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _surveyvoi_rcpp_n_states(SEXP);
extern SEXP _surveyvoi_rcpp_nth_state(SEXP, SEXP);
extern SEXP _surveyvoi_rcpp_nth_state_sparse(SEXP, SEXP, SEXP);
extern SEXP _surveyvoi_rcpp_pmedian_constraint_matrix(SEXP, SEXP);
extern SEXP _surveyvoi_rcpp_probability_of_outcome(SEXP, SEXP, SEXP, SEXP);
extern SEXP _surveyvoi_rcpp_probability_of_state(SEXP, SEXP);
extern SEXP _surveyvoi_rcpp_sample_n_uniform_states_with_replacement(SEXP, SEXP, SEXP);
extern SEXP _surveyvoi_rcpp_sample_n_uniform_states_without_replacement(SEXP, SEXP, SEXP);
extern SEXP _surveyvoi_rcpp_sample_n_weighted_states_with_replacement(SEXP, SEXP, SEXP);
extern SEXP _surveyvoi_rcpp_sample_n_weighted_states_without_replacement(SEXP, SEXP, SEXP);
extern SEXP _surveyvoi_rcpp_standard_error_value(SEXP);
extern SEXP _surveyvoi_rcpp_total_probability_of_negative_result(SEXP, SEXP, SEXP);
extern SEXP _surveyvoi_rcpp_total_probability_of_positive_result(SEXP, SEXP, SEXP);
extern SEXP _surveyvoi_rcpp_update_posterior_probability_matrix(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _surveyvoi_rcpp_which_state(SEXP);
extern SEXP _surveyvoi_rcpp_which_state_sparse(SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_surveyvoi_rcpp_approx_expected_value_of_decision_given_survey_scheme", (DL_FUNC) &_surveyvoi_rcpp_approx_expected_value_of_decision_given_survey_scheme, 14},
    {"_surveyvoi_rcpp_expected_value_of_action",                              (DL_FUNC) &_surveyvoi_rcpp_expected_value_of_action,                               3},
    {"_surveyvoi_rcpp_expected_value_of_decision_given_current_info",         (DL_FUNC) &_surveyvoi_rcpp_expected_value_of_decision_given_current_info,          6},
    {"_surveyvoi_rcpp_expected_value_of_decision_given_survey_scheme",        (DL_FUNC) &_surveyvoi_rcpp_expected_value_of_decision_given_survey_scheme,        11},
    {"_surveyvoi_rcpp_feasible_actions_ilp_matrix",                           (DL_FUNC) &_surveyvoi_rcpp_feasible_actions_ilp_matrix,                            1},
    {"_surveyvoi_rcpp_formula_sensitivity_and_specificity",                   (DL_FUNC) &_surveyvoi_rcpp_formula_sensitivity_and_specificity,                    3},
    {"_surveyvoi_rcpp_greedy_heuristic_prioritization",                       (DL_FUNC) &_surveyvoi_rcpp_greedy_heuristic_prioritization,                        6},
    {"_surveyvoi_rcpp_log_sum",                                               (DL_FUNC) &_surveyvoi_rcpp_log_sum,                                                1},
    {"_surveyvoi_rcpp_maxlik_sensitivity_and_specificity",                    (DL_FUNC) &_surveyvoi_rcpp_maxlik_sensitivity_and_specificity,                     3},
    {"_surveyvoi_rcpp_model_performance",                                     (DL_FUNC) &_surveyvoi_rcpp_model_performance,                                      5},
    {"_surveyvoi_rcpp_n_states",                                              (DL_FUNC) &_surveyvoi_rcpp_n_states,                                               1},
    {"_surveyvoi_rcpp_nth_state",                                             (DL_FUNC) &_surveyvoi_rcpp_nth_state,                                              2},
    {"_surveyvoi_rcpp_nth_state_sparse",                                      (DL_FUNC) &_surveyvoi_rcpp_nth_state_sparse,                                       3},
    {"_surveyvoi_rcpp_pmedian_constraint_matrix",                             (DL_FUNC) &_surveyvoi_rcpp_pmedian_constraint_matrix,                              2},
    {"_surveyvoi_rcpp_probability_of_outcome",                                (DL_FUNC) &_surveyvoi_rcpp_probability_of_outcome,                                 4},
    {"_surveyvoi_rcpp_probability_of_state",                                  (DL_FUNC) &_surveyvoi_rcpp_probability_of_state,                                   2},
    {"_surveyvoi_rcpp_sample_n_uniform_states_with_replacement",              (DL_FUNC) &_surveyvoi_rcpp_sample_n_uniform_states_with_replacement,               3},
    {"_surveyvoi_rcpp_sample_n_uniform_states_without_replacement",           (DL_FUNC) &_surveyvoi_rcpp_sample_n_uniform_states_without_replacement,            3},
    {"_surveyvoi_rcpp_sample_n_weighted_states_with_replacement",             (DL_FUNC) &_surveyvoi_rcpp_sample_n_weighted_states_with_replacement,              3},
    {"_surveyvoi_rcpp_sample_n_weighted_states_without_replacement",          (DL_FUNC) &_surveyvoi_rcpp_sample_n_weighted_states_without_replacement,           3},
    {"_surveyvoi_rcpp_standard_error_value",                                  (DL_FUNC) &_surveyvoi_rcpp_standard_error_value,                                   1},
    {"_surveyvoi_rcpp_total_probability_of_negative_result",                  (DL_FUNC) &_surveyvoi_rcpp_total_probability_of_negative_result,                   3},
    {"_surveyvoi_rcpp_total_probability_of_positive_result",                  (DL_FUNC) &_surveyvoi_rcpp_total_probability_of_positive_result,                   3},
    {"_surveyvoi_rcpp_update_posterior_probability_matrix",                   (DL_FUNC) &_surveyvoi_rcpp_update_posterior_probability_matrix,                    6},
    {"_surveyvoi_rcpp_which_state",                                           (DL_FUNC) &_surveyvoi_rcpp_which_state,                                            1},
    {"_surveyvoi_rcpp_which_state_sparse",                                    (DL_FUNC) &_surveyvoi_rcpp_which_state_sparse,                                     2},
    {NULL, NULL, 0}
};

void R_init_surveyvoi(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
