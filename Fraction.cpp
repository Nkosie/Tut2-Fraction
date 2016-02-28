#include "Fraction.h"

int Fraction::setDen( int numer)
{
	numarator = numer;
};
int Fraction::setNum(int denom)
{
	start:
	if (denom != 0)
	{
		denominator = denom;
	}
	else
	{
		cout << "invalid denominator!" << endl;
		goto start;
	}
};
