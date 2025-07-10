#include <iostream>
#include "RationalNumber.h"

using namespace std;

int main()
{
	RationalNumber r1;
	RationalNumber r2(2, 3);

	cout << r1.toString() << endl;
	cout << r2.toString() << endl;

	return 0;
}
