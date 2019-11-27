#ifndef MVMUL_H
#define MVMUL_H

// Returns the matrix-vector product A x.
// A is a nxn matrix stored in row-major order.
// x is a length-n vector.
// Uses OpenBLAS to perform the multiplication.
double* mvmul(const double* A, const double* x, int n);

#endif