#include <iostream>

#include "../src/Headers/Number.h"

int main(){
	Number a(1.5618);

	std::cout << a.number() << " " << a.intPart() << " " << a.fracPart() << std::endl;
	
	return 0;
}