#include <cmath>

#include "../src/Headers/Number.h"

void Number::split(double input){
	fractionPart = std::modf(input, &integerPart);
}