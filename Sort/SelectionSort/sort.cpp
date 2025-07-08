#include "sort.h"

void sort(std::vector<int>& a) {
	int min = 99999; 
	int temp = 0;
	for (int i = 0; i < a.size(); ++i) {
		for (int j = i; j < a.size(); ++j) {
			if (min > a[j]) {
				min = a[j];
				temp = j;
			}
		}
		a[temp] = a[i];
		a[i] = min;
		min = 999999;
	}
}