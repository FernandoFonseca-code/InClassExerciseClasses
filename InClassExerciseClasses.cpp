#include <iostream>
#include "RationalNumber.h"

using namespace std;

int main()
{
	RationalNumber r1;
	RationalNumber r2(2, 3);
	RationalNumber r3(4, 6);
	RationalNumber r4(5, -7);
	RationalNumber r5 = r4.add(r3);
	RationalNumber r6 = r2.add(r2);
	RationalNumber r7 = r4.add(RationalNumber(1,17));
	RationalNumber r8 = r4.subtract(r3);

	cout << r1.toString() << endl;
	cout << r2.toString() << endl;
	cout << r3.toString() << endl;
	cout << r4.toString() << endl;
	cout << r5.toString() << endl;
	cout << r6.toString() << endl;
	cout << r7.toString() << endl;
	cout << r8.toString() << endl;
	return 0;
}
