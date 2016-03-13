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

	Fraction(int, int);

	int getNum() { /*return numarator;*/ /*return denominator;*/ };
	void setNum(int numer, int denom);
	
	~Fraction()
	{
		cout << "destructor was called" << endl;
	};
};


#endif // !Fraction_H



