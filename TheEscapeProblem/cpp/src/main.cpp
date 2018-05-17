#include <iostream>
#include <vector>
#include <string>

#include "../src/Headers/grid.h"

int main() {
	std::vector<std::vector<char>> x = {
		{'o', 'o', 'o', 'o', 'o', 'o'},
		{'o', 'x', 'o', 'x', 'o', 'x'},
		{'x', 'x', 'o', 'x', 'o', 'x'},
		{'o', 'x', 'o', 'x', 'o', 'x'},
		{'o', 'o', 'o', 'o', 'o', 'o'},
		{'o', 'o', 'o', 'o', 'o', 'o'}
	};

	std::vector<std::vector<char>> y = {
		{'o', 'o', 'o', 'o', 'o', 'o'},
		{'o', 'x', 'o', 'x', 'o', 'x'},
		{'x', 'x', 'o', 'x', 'x', 'x'},
		{'o', 'x', 'o', 'x', 'o', 'x'},
		{'o', 'o', 'o', 'o', 'o', 'o'},
		{'o', 'o', 'o', 'o', 'o', 'o'}
	};

	int cx=1, cy=1;
	for (auto i : x) {
		for (auto j : i) {
			std::string tempstring;
			tempstring = std::to_string(cx)+ "_" + std::to_string(cy);
			std::cout << tempstring << " ";
			cy++;
		}
		cy=1;
		cx++;
		std::cout << std::endl;
	}


	return 0;
}