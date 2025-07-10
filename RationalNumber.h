#include <string>
#ifndef RATIONAL_NUMBER
#define RATIONAL_NUMBER

class RationalNumber
{
public:
	RationalNumber();
	RationalNumber(int, int);
	int getDenominator();
	int getNumerator();
	std::string toString();

private:
	int numerator;
	int denominator;
};
#endif
