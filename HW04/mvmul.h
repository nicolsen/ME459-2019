// Author: Nic Olsen

#ifndef MVMUL_H
#define MVMUL_H

#include <stddef.h>

// Multiplies an n by n matrix A (stored row-major) by a vector
// b and returns a pointer to the resulting vector.
// Returns NULL in the event of an error.
double* mvmul(const double *A, const double *b, size_t n);

#endif
