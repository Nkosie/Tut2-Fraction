#include <iostream>
using namespace std;
#ifndef Fraction_H
#define	Fraction_H
class Fraction
{
private:
	int numarator;
	int denominator;
	int whole_num;

public:

	Fraction(int num = 1, int den=1, int whole =1)
	{
		numarator = num;
		denominator = den;
		whole_num = whole;
	};
	~Fraction()
	{
		cout << "destructor was called" << endl;
	};
	int getNum() { return numarator; };
	int getDen() { return denominator; };
	int setNum(int numer);
	int setDen(int denom);

};


#endif // !Fraction_H



