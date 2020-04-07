#include "sort.h"

void quick_sort(int*A, int N, int l, int r) {

    if (l == r) return;   // если работы нет

    // выбрать средний элемент
    int c, ll, rr, mid;
    ll = l;  rr = r;  c = l+1;   mid = A[l];

    // и раскидать меньшие слева,
    // большие вправо, и равные ему в середине

    // надо поддерживать инвариант:
    // ОТ [L;LL) - те, кто меньше mid
    // ОТ [LL до C) - те, кто равны mid
    // ОТ [RR;R) - те, кто больше mid

    while (c < rr) {
        if (A[c] > mid) {
            swap(A, c, rr-1);
            rr--;
        }
        else if (A[c] == mid) {
            c++;
        }
        else if (A[c] < mid) {
            swap(A, ll, c);
            ll++;
            c++;
        }
    }

    quick_sort(A, N, l, ll);
    quick_sort(A, N, rr, r);
}