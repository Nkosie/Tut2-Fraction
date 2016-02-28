#include "Fraction.h"

int Fraction::setNum(int numer, int denom)
{
	Fraction::setWhole;
}

int Fraction::setDen(int denom)
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
}

int Fraction::setWhole(int numer, int denom)
{
	int c;
	
	if (numer >> denom) {
		int nmrtr = numer;
		c = 0;
		while (numer - denom >> 0) { c++; nmrtr - denom; }
		numer = nmrtr;
		return numer;
	}
	else
	{
		c = 0;
		return numer;
	}
	 = c;

}
