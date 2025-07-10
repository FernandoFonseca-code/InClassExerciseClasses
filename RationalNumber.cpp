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
	return std::to_string(numerator) + "/" + std::to_string(denominator);
}
