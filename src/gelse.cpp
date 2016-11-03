#include <Rcpp.h>

// [[Rcpp::export]]
Rcpp::IntegerVector c_gelse(Rcpp::LogicalMatrix mat)
{
    int N = mat.nrow();
    int M = mat.ncol();

    Rcpp::IntegerVector indices(N);

    // set index to index of the first positive element in row (1-based)
    for(int i = 0; i < N; i++){
        indices[i] = NA_INTEGER;
        for(int j = 0; j < M; j++){
            if(mat(i,j)){
                indices[i] = j+1; 
                break;
            }
        }
    }

    return indices;
}
