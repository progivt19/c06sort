// sort.cpp : ЭТО ОСНОВНОЙ ФАЙЛ ПРОЕКТА
//            отсюда вызываются различные функции сортировки,
//            каждая живет в своем файле

#include "sort.h"   // здесь вспомогательная функция print
#include <iostream> // для cout
#include <ctime>    // для замеров времени

#include <cstdlib>

using namespace std;

int main()
{
	int N;
	time_t t0 = 0, t1 = 0;

	// cout << "Введите n:";  cin >> N;
	// int *A = new int[N];

	N = 10;
	int A[] = { 5, 4, 1, 20, 7, 3, 6, 2, 8, 9 };

	print(A, N);
	selection_sort(A, N);

	cout << "Finished, time = " << t1 - t0 << "ms\n";
	return 0;
}

