#include "calculator.h" 
#include <iostream> 
using namespace std;

Complex complexCreate(double *Re, double *Im)
{
	Complex result = (Complex)malloc(sizeof(*result));
	if (result == NULL)
		return NULL;
	result->Re = *Re;
	result->Im = *Im;
	return result;
}

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
			cout << "0" << endl;
		}
	}
	if (z2 > 0)
	{
		cout << "+";
		cout << "i";
		if (z2 != 1)
		{
			cout << "*";
			cout << "" << z2;
			cout << endl;
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
			cout << "" << fabs(z2);
			cout << endl;
		}
		else cout << endl;
	}
}
Complex add(Complex a, Complex b)
{
	double z1, z2;
	z1 = a->Re + b->Re;
	z2 = a->Im + b->Im;
	printresult(z1, z2);
	return a;
}
Complex multiply(Complex a, Complex b)
{
	double z1, z2;
	z1 = a->Re * b->Re - a->Im * b->Im;
	z2 = a->Re * b->Im + b->Re * a->Im;
	printresult(z1, z2);
	return a;
}
Complex substract(Complex a, Complex b)
{
	double z1, z2;
	z1 = a->Re - b->Re;
	z2 = a->Im - b->Im;
	printresult(z1, z2);
	return a;
}
Complex devide(Complex a, Complex b)
{
	double z1, z2;
	z1 = (a->Re * b->Re + a->Im * b->Im) / (b->Re * b->Re + b->Im * b->Im);
	z2 = (b->Re * a->Im - a->Re * b->Im) / (b->Re * b->Re + b->Im * b->Im);
	printresult(z1, z2);
	return a;
}
void menu_1(double *Re, double *Im)
{
	cout << "_____________________________________________" << endl;
	cout << "Enter Re and Im of the first Complex:" << endl;
	cin >> *Re >> *Im;
}
void menu_2(double *Re, double *Im)
{
	cout << endl;
	cout << "Enter Re and Im of the second Complex:" << endl;
	cin >> *Re >> *Im;
}
void menu(Complex a, Complex b)
{
	char op;
	cout << endl;
	cout << "Chose operation:" << endl;
	cout << "+   -   Addition" << endl;
	cout << "-   -   Substract" << endl;
	cout << "*   -   Multiply" << endl;
	cout << "/   -   Devide" << endl;
	cout << endl;
	cin >> op;
	switch (op)
	{
	case '+':
	{
		add(a, b);
	}
	break;
	case '-':
	{
		substract(a, b);
	}
	break;
	case '*':
	{
		multiply(a, b);
	}
	break;
	case '/':
	{
		devide(a, b);
	}
	break;
	default:
	{
		cout << "Please, chose correct operation" << endl;
	}
	exit(1);
	}
	cout << "_____________________________________________" << endl;
	cout << endl;
	cout << "Press any button to continue. Press N to exit." << endl;
	cin >> op;
	if (op == 'N' || op == 'n')
	{
		exit(0);
	}
}
