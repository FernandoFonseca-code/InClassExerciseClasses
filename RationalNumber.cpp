#include "RationalNumber.h"
#include <iostream>

RationalNumber::RationalNumber()
{
	numerator = 0;
	denominator = 1;
}

RationalNumber::RationalNumber(int numerator, int denominator)
{
	this->numerator = numerator;
	this->denominator = denominator;
	simplify();
}
void RationalNumber::simplify()
{
	int div = gcd(abs(numerator), abs(denominator));
	numerator /= div;
	denominator /= div;
	if (denominator < 0) {
		denominator *= -1;
		numerator *= -1;
	}
}

int RationalNumber::gcd(int a, int b)
{

	int res = a < b ? a : b;

	while (res > 1) {
		if (a % res == 0 && b % res == 0) {
			return res;
		}
		res--;
	}
}

int RationalNumber::getDenominator()
{
	return denominator;
}

int RationalNumber::getNumerator()
{
	return numerator;
}

std::string RationalNumber::toString()
{
	if (denominator == 1) {
		return std::to_string(numerator);
	}
	else
	{
		return std::to_string(numerator) + "/" + std::to_string(denominator);
	}
	
}

RationalNumber RationalNumber::add(const RationalNumber& other)
{
	int n = numerator * other.denominator + other.numerator * denominator;
	int d = denominator * other.denominator;
	return RationalNumber(n, d);
}

RationalNumber RationalNumber::subtract(const RationalNumber& other)
{
	//int n = numerator * other.denominator - other.numerator * denominator;
	//int d = denominator * other.denominator;
	//return RationalNumber(n, d);

	return add(RationalNumber(-other.numerator, other.denominator));
}