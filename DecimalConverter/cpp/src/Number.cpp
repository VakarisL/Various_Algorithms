#include <cmath>
#include <string>

#include "../src/Headers/Number.h"
#include "../src/Headers/Conversions.h"

void Number::split(double input){
	fractionPart = std::modf(input, &integerPart);
}

std::string Number::conversion(int base){
	std::string result;
	result.append(::intConversion(integerPart, base));
	result.append(".");
	result.append(::fracConversion(fractionPart, base));
	return result;
}

