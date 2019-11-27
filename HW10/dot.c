// Author: Nic Olsen

#include <stdio.h>
#include <cblas.h>

int main() {
    double x[] = {1, 1, 1, 1};
    double y[] = {2, 2, 2, 2};
    int n = 4;
    int inc = 1;

    double dot = cblas_ddot(n, x, inc, y, inc);
    printf("x . y = %f\n", dot);

    return 0;
}