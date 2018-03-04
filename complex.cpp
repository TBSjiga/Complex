#include "calculator.h" 
#include <iostream> 
using namespace std;
void printresult(double z1, double z2)
{
	cout << endl;
	cout << "Result: ";
	if (z1 != 0)
	{
		cout << "" << z1;
	}
	else
	{
		if (z1 == 0)
		{
			cout << "0"<<endl;
		}
	}
	if (z2 > 0)
	{
		cout << "+";
		cout << "i";
		if (z2 != 1)
		{
			cout << "*";
			cout << "(";
			cout << "" << z2;
			cout << ")" << endl;
		}
		else cout << endl;
	}
	if (z2 < 0)
	{
		cout << "-";
		cout << "i";
		if (z2 != (-1))
		{
			cout << "*";
			cout << "(";
			cout << "" << fabs(z2);
			cout << ")" << endl;
		}
		else cout << endl;
	}
}
void add(complex *a, complex *b)
{
	double z1, z2;
	z1 = a->Re + b->Re;
	z2 = a->Im + b->Im;
	printresult(z1, z2);
	return;
}
void multiply(complex *a, complex *b)
{
	double z1, z2;
	z1 = a->Re * b->Re - a->Im * b->Im;
	z2 = a->Re * b->Im + b->Re * a->Im;
	printresult(z1, z2);
	return;
}
void substract(complex *a, complex *b)
{
	double z1, z2;
	z1 = a->Re - b->Re;
	z2 = a->Im - b->Im;
	printresult(z1, z2);
	return;
}
void devide(complex *a, complex *b)
{
	double z1, z2;
	z1 = (a->Re * b->Re + a->Im * b->Im) / (b->Re * b->Re + b->Im * b->Im);
	z2 = (b->Re * a->Im - a->Re * b->Im) / (b->Re * b->Re + b->Im * b->Im);
	printresult(z1, z2);
	return;
}
