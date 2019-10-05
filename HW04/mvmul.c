// Author: Nic Olsen

#include <stddef.h>
#include <stdlib.h>

#include "mvmul.h"

double* mvmul(const double *A, const double *b, size_t n) {
    double *c = (double *) calloc(n, sizeof(double));
    if (!c) {
        return NULL;
    }

    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < n; j++) {
            c[i] += A[i * n + j] * b[j];
        }
    }

    return c;
}
