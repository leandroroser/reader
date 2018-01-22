// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/chunkR.h"
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// matrix2df
DataFrame matrix2df(SEXP x);
RcppExport SEXP _chunkR_matrix2df(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(matrix2df(x));
    return rcpp_result_gen;
END_RCPP
}
// chunker__new_data_frame
RcppExport SEXP chunker__new_data_frame(SEXP path_, SEXP sep_, SEXP quoted_, SEXP has_colnames_, SEXP has_rownames_, SEXP chunksize_, SEXP column_types_);
RcppExport SEXP _chunkR_chunker__new_data_frame(SEXP path_SEXP, SEXP sep_SEXP, SEXP quoted_SEXP, SEXP has_colnames_SEXP, SEXP has_rownames_SEXP, SEXP chunksize_SEXP, SEXP column_types_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type path_(path_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type sep_(sep_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type quoted_(quoted_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type has_colnames_(has_colnames_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type has_rownames_(has_rownames_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type chunksize_(chunksize_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type column_types_(column_types_SEXP);
    rcpp_result_gen = Rcpp::wrap(chunker__new_data_frame(path_, sep_, quoted_, has_colnames_, has_rownames_, chunksize_, column_types_));
    return rcpp_result_gen;
END_RCPP
}
// chunker__new_matrix
RcppExport SEXP chunker__new_matrix(SEXP path_, SEXP sep_, SEXP quoted_, SEXP has_colnames_, SEXP has_rownames_, SEXP chunksize_);
RcppExport SEXP _chunkR_chunker__new_matrix(SEXP path_SEXP, SEXP sep_SEXP, SEXP quoted_SEXP, SEXP has_colnames_SEXP, SEXP has_rownames_SEXP, SEXP chunksize_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type path_(path_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type sep_(sep_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type quoted_(quoted_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type has_colnames_(has_colnames_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type has_rownames_(has_rownames_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type chunksize_(chunksize_SEXP);
    rcpp_result_gen = Rcpp::wrap(chunker__new_matrix(path_, sep_, quoted_, has_colnames_, has_rownames_, chunksize_));
    return rcpp_result_gen;
END_RCPP
}
// chunker__next_chunk
RcppExport SEXP chunker__next_chunk(SEXP ptr);
RcppExport SEXP _chunkR_chunker__next_chunk(SEXP ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(chunker__next_chunk(ptr));
    return rcpp_result_gen;
END_RCPP
}
// chunker__set_colnames
RcppExport SEXP chunker__set_colnames(SEXP ptr);
RcppExport SEXP _chunkR_chunker__set_colnames(SEXP ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(chunker__set_colnames(ptr));
    return rcpp_result_gen;
END_RCPP
}
// chunker__get_matrix
RcppExport SEXP chunker__get_matrix(SEXP ptr);
RcppExport SEXP _chunkR_chunker__get_matrix(SEXP ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(chunker__get_matrix(ptr));
    return rcpp_result_gen;
END_RCPP
}
// chunker__get_dataframe
RcppExport SEXP chunker__get_dataframe(SEXP ptr);
RcppExport SEXP _chunkR_chunker__get_dataframe(SEXP ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(chunker__get_dataframe(ptr));
    return rcpp_result_gen;
END_RCPP
}
// chunker__get_colnames
RcppExport SEXP chunker__get_colnames(SEXP ptr);
RcppExport SEXP _chunkR_chunker__get_colnames(SEXP ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(chunker__get_colnames(ptr));
    return rcpp_result_gen;
END_RCPP
}
// chunker__get_completed
RcppExport SEXP chunker__get_completed(SEXP ptr);
RcppExport SEXP _chunkR_chunker__get_completed(SEXP ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(chunker__get_completed(ptr));
    return rcpp_result_gen;
END_RCPP
}
// chunker__get_type
RcppExport SEXP chunker__get_type(SEXP ptr);
RcppExport SEXP _chunkR_chunker__get_type(SEXP ptrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    rcpp_result_gen = Rcpp::wrap(chunker__get_type(ptr));
    return rcpp_result_gen;
END_RCPP
}

// validate (ensure exported C++ functions exist before calling them)
static int _chunkR_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _chunkR_RcppExport_registerCCallable() { 
    R_RegisterCCallable("chunkR", "_chunkR_RcppExport_validate", (DL_FUNC)_chunkR_RcppExport_validate);
    return R_NilValue;
}

static const R_CallMethodDef CallEntries[] = {
    {"_chunkR_matrix2df", (DL_FUNC) &_chunkR_matrix2df, 1},
    {"_chunkR_chunker__new_data_frame", (DL_FUNC) &_chunkR_chunker__new_data_frame, 7},
    {"_chunkR_chunker__new_matrix", (DL_FUNC) &_chunkR_chunker__new_matrix, 6},
    {"_chunkR_chunker__next_chunk", (DL_FUNC) &_chunkR_chunker__next_chunk, 1},
    {"_chunkR_chunker__set_colnames", (DL_FUNC) &_chunkR_chunker__set_colnames, 1},
    {"_chunkR_chunker__get_matrix", (DL_FUNC) &_chunkR_chunker__get_matrix, 1},
    {"_chunkR_chunker__get_dataframe", (DL_FUNC) &_chunkR_chunker__get_dataframe, 1},
    {"_chunkR_chunker__get_colnames", (DL_FUNC) &_chunkR_chunker__get_colnames, 1},
    {"_chunkR_chunker__get_completed", (DL_FUNC) &_chunkR_chunker__get_completed, 1},
    {"_chunkR_chunker__get_type", (DL_FUNC) &_chunkR_chunker__get_type, 1},
    {"_chunkR_RcppExport_registerCCallable", (DL_FUNC) &_chunkR_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_chunkR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
