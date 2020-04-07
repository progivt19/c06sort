#include "sort.h"

void selection_sort(int *a, int n) {
	int min, min_here, imin, i, ops;

	// инвариант: слева от min_here - сортированная часть.
	//            все элементы в ней не больше любого элемента
	//            оставшейся части
	// действие: выбираем в несортированной части минимум и 
	//           ставим его в место min_here
	//           сортированная часть увеличивается
	
	for (min_here = 0; min_here < n-1; min_here++) {
		// ищем минимум от min_here до конца массива
		// min - известный минимум, imin - позиция
		min = a[min_here];
		imin = min_here;
		for (i = min_here+1; i < n; i++)
			if (a[i] < min) {
				min = a[i];
				imin = i;
			}
		swap(a, min_here, imin);

		// -> сюда вставьте распечатку массива после третьего прохода (задание 2)
		// if(...) print(...);
	}
}
