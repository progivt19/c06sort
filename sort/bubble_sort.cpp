#include "sort.h"

void bubble_sort(int *A, int N) {
    int i, j, ops;
    bool obmen;
    for (i = 0; i < N; i++) {
        obmen = false;
        for (j = 0; j < N - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                swap(A, i, j);
                obmen = true;
            }
        }
        if (!obmen) break;
    }
}
