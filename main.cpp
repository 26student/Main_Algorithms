#include "header.h"

int main() {
	std::vector<int> a(10);

	fill_vector(a);
	sort(a);

	for (auto& elem : a) {
		std::cout << elem << " ";
	}
	return 0;
}