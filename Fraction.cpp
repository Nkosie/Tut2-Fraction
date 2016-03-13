#include "Fraction.h"
Fraction::Fraction(int numer=0, int denom=1)
	{
		numarator = numer;
		denominator = denom;
	};
void Fraction::setNum(int numer, int denom) //mutator function
{
	int whole;
	whole = numer / denom;
	numarator = numer%denom;
	denominator = denom;

	/*numarator = numer;*/
}

//int Fraction::getNum(int numer, int denom);





















//int Fraction::setDen(int denom)
//{
//	start:
//	if (denom != 0)
//	{
//		denominator = denom;
//		return denominator;
//	}
//	else
//	{
//		cout << "denominator cannot be zero!" << endl;
//		goto start;
//	}
//}

//int Fraction::setWhole(int numer, int denom, int whole)
//{
//	int c;
//	
//	if (numer >> denom) {
//		int nmrtr = numer;
//		c = 0;
//		while ((numer - denom) >> 0)
//		{ c++;
//		nmrtr - denom;
//		}
//		numer = nmrtr;
//		return numer;
//	}
//	else
//	{
//		c = 0;
//		return numer;
//	}
//	whole = c;
//	return whole;
//}
