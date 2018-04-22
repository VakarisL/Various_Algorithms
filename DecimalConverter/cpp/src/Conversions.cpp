#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

#include "../src/Headers/Conversions.h"

std::string intConversion(double number, int base) {
	std::string result;
	int temp = (int)(number);
	while (temp > 0) {
		if (temp % base < 10) {
			result += std::to_string(temp % base);
		}
		if (temp % base > 10 && temp % base < 42) {
			result += (char)((temp % base)+55);
		}
		if (temp % base >= 42) {
			std::cerr << "Can't convert into such high number base" <<std::endl;
			std::terminate();
		}
		temp /= base;
	}
	reverse(result.begin(), result.end());
	return result;
}

std::string fracConversion(double number, int base) {
	std::string result;// = std::to_string(number);
	int guard = 15; //attempt to keep only the significant bits in, to avoid double rounding off errors
	double temp;
	while (number > 0 && guard != 0){
		number*=base;
		number=std::modf(number, &temp);
		if (temp < 10) {
			result += std::to_string((int)(temp));
		}
		if (temp > 10 && temp < 42) {
			result += (char)(((int)(temp) )+55);
		}
		if (temp >= 42) {
			std::cerr << "Can't convert into such high number base" <<std::endl;
			std::terminate();
		}
		guard--;
	}
	return result;
}