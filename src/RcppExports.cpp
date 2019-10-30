// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_from_json
SEXP rcpp_from_json(const char * json, bool& simplify, bool& na_fill);
RcppExport SEXP _jsonify_rcpp_from_json(SEXP jsonSEXP, SEXP simplifySEXP, SEXP na_fillSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char * >::type json(jsonSEXP);
    Rcpp::traits::input_parameter< bool& >::type simplify(simplifySEXP);
    Rcpp::traits::input_parameter< bool& >::type na_fill(na_fillSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_from_json(json, simplify, na_fill));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_dtypes
Rcpp::IntegerVector rcpp_get_dtypes(const char * json);
RcppExport SEXP _jsonify_rcpp_get_dtypes(SEXP jsonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char * >::type json(jsonSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_dtypes(json));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_simplify_vector
SEXP rcpp_simplify_vector(Rcpp::List& lst, int& r_type, R_xlen_t n);
RcppExport SEXP _jsonify_rcpp_simplify_vector(SEXP lstSEXP, SEXP r_typeSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List& >::type lst(lstSEXP);
    Rcpp::traits::input_parameter< int& >::type r_type(r_typeSEXP);
    Rcpp::traits::input_parameter< R_xlen_t >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_simplify_vector(lst, r_type, n));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_pretty_json
Rcpp::StringVector rcpp_pretty_json(const char* json);
RcppExport SEXP _jsonify_rcpp_pretty_json(SEXP jsonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char* >::type json(jsonSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_pretty_json(json));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_minify_json
Rcpp::StringVector rcpp_minify_json(const char* json);
RcppExport SEXP _jsonify_rcpp_minify_json(SEXP jsonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char* >::type json(jsonSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_minify_json(json));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_pretty_print
void rcpp_pretty_print(const char* json);
RcppExport SEXP _jsonify_rcpp_pretty_print(SEXP jsonSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char* >::type json(jsonSEXP);
    rcpp_pretty_print(json);
    return R_NilValue;
END_RCPP
}
// rcpp_read_json_file
SEXP rcpp_read_json_file(const char* file, const char* mode, bool& simplify, bool& na_fill, int buffer_size);
RcppExport SEXP _jsonify_rcpp_read_json_file(SEXP fileSEXP, SEXP modeSEXP, SEXP simplifySEXP, SEXP na_fillSEXP, SEXP buffer_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char* >::type file(fileSEXP);
    Rcpp::traits::input_parameter< const char* >::type mode(modeSEXP);
    Rcpp::traits::input_parameter< bool& >::type simplify(simplifySEXP);
    Rcpp::traits::input_parameter< bool& >::type na_fill(na_fillSEXP);
    Rcpp::traits::input_parameter< int >::type buffer_size(buffer_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_read_json_file(file, mode, simplify, na_fill, buffer_size));
    return rcpp_result_gen;
END_RCPP
}
// source_tests
void source_tests();
RcppExport SEXP _jsonify_source_tests() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    source_tests();
    return R_NilValue;
END_RCPP
}
// rcpp_to_json
Rcpp::StringVector rcpp_to_json(SEXP lst, bool unbox, int digits, bool numeric_dates, bool factors_as_string, std::string by);
RcppExport SEXP _jsonify_rcpp_to_json(SEXP lstSEXP, SEXP unboxSEXP, SEXP digitsSEXP, SEXP numeric_datesSEXP, SEXP factors_as_stringSEXP, SEXP bySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type lst(lstSEXP);
    Rcpp::traits::input_parameter< bool >::type unbox(unboxSEXP);
    Rcpp::traits::input_parameter< int >::type digits(digitsSEXP);
    Rcpp::traits::input_parameter< bool >::type numeric_dates(numeric_datesSEXP);
    Rcpp::traits::input_parameter< bool >::type factors_as_string(factors_as_stringSEXP);
    Rcpp::traits::input_parameter< std::string >::type by(bySEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_to_json(lst, unbox, digits, numeric_dates, factors_as_string, by));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_validate_json
Rcpp::LogicalVector rcpp_validate_json(Rcpp::StringVector json);
RcppExport SEXP _jsonify_rcpp_validate_json(SEXP jsonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type json(jsonSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_validate_json(json));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_jsonify_rcpp_from_json", (DL_FUNC) &_jsonify_rcpp_from_json, 3},
    {"_jsonify_rcpp_get_dtypes", (DL_FUNC) &_jsonify_rcpp_get_dtypes, 1},
    {"_jsonify_rcpp_simplify_vector", (DL_FUNC) &_jsonify_rcpp_simplify_vector, 3},
    {"_jsonify_rcpp_pretty_json", (DL_FUNC) &_jsonify_rcpp_pretty_json, 1},
    {"_jsonify_rcpp_minify_json", (DL_FUNC) &_jsonify_rcpp_minify_json, 1},
    {"_jsonify_rcpp_pretty_print", (DL_FUNC) &_jsonify_rcpp_pretty_print, 1},
    {"_jsonify_rcpp_read_json_file", (DL_FUNC) &_jsonify_rcpp_read_json_file, 5},
    {"_jsonify_source_tests", (DL_FUNC) &_jsonify_source_tests, 0},
    {"_jsonify_rcpp_to_json", (DL_FUNC) &_jsonify_rcpp_to_json, 6},
    {"_jsonify_rcpp_validate_json", (DL_FUNC) &_jsonify_rcpp_validate_json, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_jsonify(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
