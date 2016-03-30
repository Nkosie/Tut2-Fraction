#include <iostream>

using namespace std;

class Fraction
{
	int numerator;
	int denominator;

public:
	Fraction()
	{
		numerator = 0;
		denominator = 1;

	}

	Fraction(int nm, int den)
	{
		setNumDenom(nm, den);

	}
	void setNumDenom(int n, int d)
	{
		if (d != 0) {
			denominator = d;
			numerator = n;
		}
		else
		{
			cout << "Invalid denominator" << endl;
		}
	}


	void getNumDenom(int &num, int &denom)
	{
		num = numerator;
		denom = denominator;
	}

	Fraction operator+(Fraction b)
	{
		Fraction ad;
		ad.numerator = (b.denominator*numerator) + (b.numerator*denominator);
		ad.denominator = b.denominator*denominator;
		//c.print();
		return ad;
	}

	Fraction operator-(Fraction b)
	{
		Fraction s;
		s.numerator= (b.denominator*numerator) - (b.numerator*denominator);
		s.denominator = b.denominator*denominator;
		/*s.print();*/
		return s;
	}

	Fraction operator*(Fraction b)
	{
		Fraction m;
		m.numerator = numerator*b.numerator;
		m.denominator = denominator*b.denominator;
	/*	m.print();*/
		return m;
	}

	Fraction operator/(Fraction b)
	{
		Fraction d;
		d.numerator = numerator*b.denominator;
		d.denominator = denominator*b.numerator;
	/*	d.print();*/
		return d;
	}
	void print()
	{
		/*Creating a mixed number fraction*/
		int WholeNum = numerator / denominator;
		numerator = numerator%denominator;

		if (numerator == 0) 
		{
			cout << "My Fraction :\n" << WholeNum << endl << endl;
		}
		/*Here i am simplifying my fraction*/
		else
		{
			for (unsigned int i = numerator + 1; i> 1; i--)
			{

				if ((numerator%i == 0) && (denominator%i == 0))
				{
					numerator = numerator / i;
					denominator = denominator / i;

					if (WholeNum == 0)
					{
						cout << "My Fraction :\n" << numerator << "/" << denominator <<endl<< endl;
					}
					else
					cout << "My Fraction :\n" << WholeNum << " " << numerator << "/" << denominator << endl << endl;
				}
			}
		}
	}

};

int main()
{
	Fraction c, b(1, 4), a(1, 4);


	cout << "The first one: \n";
	a.print();

	cout << "The second fraction: \n";
	b.print();

	cout << "The added results:  " << endl;
	c = a + b;
	c.print();

	cout << "The subtracted results:  " << endl;
	c = a-b;
	c.print();

	cout << "The multiplied results:  " << endl;
	c = a * b;
	c.print();
	 
	cout << "The devided results:  " << endl;
	c = a / b;
	c.print();

	return 0;
}