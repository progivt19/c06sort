// utils.cpp : ЭТО ВСПОМОГАТЕЛЬНЫЕ ФУНКЦИИ

#include <iostream>

// печать массива A длины N
void print(int *A, int N) {
    for (int i = 0; i < N; i++) std::cout << A[i] << " "; 
    std::cout << "\n";
}

// перестановка i-го и j-гоэлементов в массиве A
void swap(int*A, int i, int j) {
    int buf = A[i];
    A[i] = A[j];
    A[j] = buf;
}

