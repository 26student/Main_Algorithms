#include "sort.h"

void sort(std::vector<int>& a) {
	for (int i = 1; i < a.size(); ++i) {
		int temp = a[i];
		int j = i - 1;
		while (j > 0 && temp < a[j]) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = temp;
	}
}