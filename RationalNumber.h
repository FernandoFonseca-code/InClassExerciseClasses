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
	RationalNumber add(const RationalNumber&);
	RationalNumber subtract(const RationalNumber&);

private:
	int numerator;
	int denominator;
	void simplify();
	int gcd(int, int);
};
#endif
