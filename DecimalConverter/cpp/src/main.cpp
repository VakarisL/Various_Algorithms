#include <iostream>

#include "../src/Headers/Number.h"

int main(){
	Number a(50.75);

	std::cout << "Decimal number: " <<a.number() << std::endl;

	std::cout << "In binary: " << a.conversion() << std::endl;
	std::cout << "In octal: "<< a.conversion(8) << std::endl;
	std::cout << "In hexadecimal: "<< a.conversion(16) << std::endl;
	
	return 0;
}