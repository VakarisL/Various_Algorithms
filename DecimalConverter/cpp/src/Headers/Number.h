#ifndef NUMBER_H_
#define NUMBER_H_

class Number {
  private:
	double num;
	double integerPart;
	double fractionPart;
	void split(double);
  public:
	Number() : num(0) {}
	Number(double input) : num(input) {split(input);}
	inline double number() {return num;}
	inline double intPart() {return integerPart;}
	inline double fracPart() {return fractionPart;}	
	void setNumber(double input) {num=input; split(input);}
};


#endif