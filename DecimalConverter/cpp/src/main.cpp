#include <iostream>

#include "../src/Headers/Number.h"

int main(){
	Number a(50.7612);

	std::cout << a.conversion() << std::endl;
	std::cout << a.conversion(8) << std::endl;
	std::cout << a.conversion(5) << std::endl;
	std::cout << a.conversion(16) << std::endl;
	std::cout << a.number() << " " << a.intPart() << " " << a.fracPart() << std::endl;
	
	return 0;
}