// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// c_gelse
Rcpp::IntegerVector c_gelse(Rcpp::LogicalMatrix mat);
RcppExport SEXP gelse_c_gelse(SEXP matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::LogicalMatrix >::type mat(matSEXP);
    rcpp_result_gen = Rcpp::wrap(c_gelse(mat));
    return rcpp_result_gen;
END_RCPP
}