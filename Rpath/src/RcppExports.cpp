// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rk4_run
List rk4_run(List params, List instate, List forcing, List fishing, List stanzas, int StartYear, int EndYear);
RcppExport SEXP Rpath_rk4_run(SEXP paramsSEXP, SEXP instateSEXP, SEXP forcingSEXP, SEXP fishingSEXP, SEXP stanzasSEXP, SEXP StartYearSEXP, SEXP EndYearSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< List >::type instate(instateSEXP);
    Rcpp::traits::input_parameter< List >::type forcing(forcingSEXP);
    Rcpp::traits::input_parameter< List >::type fishing(fishingSEXP);
    Rcpp::traits::input_parameter< List >::type stanzas(stanzasSEXP);
    Rcpp::traits::input_parameter< int >::type StartYear(StartYearSEXP);
    Rcpp::traits::input_parameter< int >::type EndYear(EndYearSEXP);
    __result = Rcpp::wrap(rk4_run(params, instate, forcing, fishing, stanzas, StartYear, EndYear));
    return __result;
END_RCPP
}
// Adams_run
List Adams_run(List params, List instate, List forcing, List fishing, List stanzas, int StartYear, int EndYear);
RcppExport SEXP Rpath_Adams_run(SEXP paramsSEXP, SEXP instateSEXP, SEXP forcingSEXP, SEXP fishingSEXP, SEXP stanzasSEXP, SEXP StartYearSEXP, SEXP EndYearSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< List >::type instate(instateSEXP);
    Rcpp::traits::input_parameter< List >::type forcing(forcingSEXP);
    Rcpp::traits::input_parameter< List >::type fishing(fishingSEXP);
    Rcpp::traits::input_parameter< List >::type stanzas(stanzasSEXP);
    Rcpp::traits::input_parameter< int >::type StartYear(StartYearSEXP);
    Rcpp::traits::input_parameter< int >::type EndYear(EndYearSEXP);
    __result = Rcpp::wrap(Adams_run(params, instate, forcing, fishing, stanzas, StartYear, EndYear));
    return __result;
END_RCPP
}
// deriv_vector
List deriv_vector(List params, List state, List forcing, List fishing, List stanzas, int y, int m, double tt);
RcppExport SEXP Rpath_deriv_vector(SEXP paramsSEXP, SEXP stateSEXP, SEXP forcingSEXP, SEXP fishingSEXP, SEXP stanzasSEXP, SEXP ySEXP, SEXP mSEXP, SEXP ttSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< List >::type state(stateSEXP);
    Rcpp::traits::input_parameter< List >::type forcing(forcingSEXP);
    Rcpp::traits::input_parameter< List >::type fishing(fishingSEXP);
    Rcpp::traits::input_parameter< List >::type stanzas(stanzasSEXP);
    Rcpp::traits::input_parameter< int >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< double >::type tt(ttSEXP);
    __result = Rcpp::wrap(deriv_vector(params, state, forcing, fishing, stanzas, y, m, tt));
    return __result;
END_RCPP
}
// SplitSetPred
int SplitSetPred(List stanzas, List state);
RcppExport SEXP Rpath_SplitSetPred(SEXP stanzasSEXP, SEXP stateSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type stanzas(stanzasSEXP);
    Rcpp::traits::input_parameter< List >::type state(stateSEXP);
    __result = Rcpp::wrap(SplitSetPred(stanzas, state));
    return __result;
END_RCPP
}
