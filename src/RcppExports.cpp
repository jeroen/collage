// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// closest_rgb
IntegerVector closest_rgb(DataFrame X, DataFrame B);
RcppExport SEXP tipixel_closest_rgb(SEXP XSEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type X(XSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(closest_rgb(X, B));
    return rcpp_result_gen;
END_RCPP
}
// dist_rgb
NumericMatrix dist_rgb(DataFrame X, DataFrame B);
RcppExport SEXP tipixel_dist_rgb(SEXP XSEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type X(XSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(dist_rgb(X, B));
    return rcpp_result_gen;
END_RCPP
}
// collage
NumericVector collage(List tiles, int width, int height, IntegerVector best_tiles, int tile_dim);
RcppExport SEXP tipixel_collage(SEXP tilesSEXP, SEXP widthSEXP, SEXP heightSEXP, SEXP best_tilesSEXP, SEXP tile_dimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type tiles(tilesSEXP);
    Rcpp::traits::input_parameter< int >::type width(widthSEXP);
    Rcpp::traits::input_parameter< int >::type height(heightSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type best_tiles(best_tilesSEXP);
    Rcpp::traits::input_parameter< int >::type tile_dim(tile_dimSEXP);
    rcpp_result_gen = Rcpp::wrap(collage(tiles, width, height, best_tiles, tile_dim));
    return rcpp_result_gen;
END_RCPP
}
// scale_img
DataFrame scale_img(NumericVector img, int width, int height);
RcppExport SEXP tipixel_scale_img(SEXP imgSEXP, SEXP widthSEXP, SEXP heightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type img(imgSEXP);
    Rcpp::traits::input_parameter< int >::type width(widthSEXP);
    Rcpp::traits::input_parameter< int >::type height(heightSEXP);
    rcpp_result_gen = Rcpp::wrap(scale_img(img, width, height));
    return rcpp_result_gen;
END_RCPP
}
