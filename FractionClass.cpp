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
	void print()
	{
		/*Creating a mixed number fraction*/
		int WholeNum = numerator / denominator;
		numerator = numerator%denominator;
		if (numerator == 0) {

			cout << "My Fraction :" << WholeNum << endl;
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
					cout << "My Fraction :" << WholeNum << " " << numerator << "/" << denominator << endl;


				}



			}

		}

	}

};

int main()
{
	Fraction frac;
	frac.setNumDenom(28, 12);
	frac.print();
}


