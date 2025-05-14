#include <stdio.h>
#include <stdlib.h>

#define N 1000

int main() {
    int n = 1000;
    int matrix[n][n];
    int i, j;

    // int *p = (int *) malloc(n*n);
    // p = &matrix;


    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            matrix[i][j] = i * n + j + 1; //1 2 3 4 ... 1000, 1001
        }
    }

    for (i = n - 1; i >= 0; i--) {
        for (j = n - 1; j >= 0; j--) {
            printf("%6d ", matrix[i][j]);
        }
        printf("\n");
    }
    // free(p);
    return 0;
}
