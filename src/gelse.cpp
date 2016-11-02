#include <Rcpp.h>

// [[Rcpp::export]]
Rcpp::IntegerVector c_gelse(Rcpp::LogicalMatrix mat)
{
    int N = mat.nrow();
    int M = mat.ncol();

    Rcpp::IntegerVector indices(N);

    for(int i = 0; i < N; i++){
        indices[i] = NA_INTEGER;
        for(int j = 0; j < M; j++){
            if(mat(i,j)){
                indices[i] = j+1; 
            }
        }
    }

    return indices;
}
