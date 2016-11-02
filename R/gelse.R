#' @useDynLib gelse
#' @importFrom Rcpp sourceCpp
NULL

#' gelse
#' 
#' @param x list of n logical vectors, logical matrix, or logical data.frame
#' @param v vector with n elements 
#' @return a vector with the same type as v
#' @export
#' 
gelse <- function(x, v, default=NA){
  if('list' %in% class(x)){
    # as.matrix(x) doesn't work for lists
    x <- as.data.frame(x)
  }
  if('data.frame' %in% class(x)){
    x <- as.matrix(x)
  }

  stopifnot(all(lapply(x, class) == 'logical'))
  stopifnot(ncol(x) == length(v))

  x <- apply(x, c(1,2), function(x) if(is.na(x)) {FALSE} else {x})

  out <- v[c_gelse(x)]
  if(!is.na(default)){
    ifelse(is.na(out), default, out)
  }
  out
}
