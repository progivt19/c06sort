void insertion_sort(int *A, int N) {
    int cur = 0, temp, here, i, ops;

    for (cur = 0;cur < N;cur++) {
        here = 0;
        temp = A[cur];
        while (A[here] < A[cur]) {
            here++;
        }
        for (i = cur;i > here;i--) {
            A[i] = A[i - 1];
        }
        A[here] = temp;
    }
}
