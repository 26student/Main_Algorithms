#include "fill_data.h" 

void fill_vector(std::vector<int>& a) {
	for (auto& elem : a) {
		elem = rand() % 100;
		std::cout << elem << " ";
	}
	std::cout << "\n";
}