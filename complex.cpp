#include "complex.h" 
//read 1st Complex
void Complex::reading1() {
	cout << "_____________________________________________" << endl;
	cout << "Enter Re and Im of the first Complex: "<<endl;
	cin >> Re >> Im;
}
//read 2nd Complex
void Complex::reading2() {
	cout << "Enter Re and Im of the second Complex: " << endl;
	cin >> Re >> Im;
}
//result
void Complex::printResult(double r, double i)
{
	cout <<endl<< "Result: ";
	if (r != 0)
	{
		cout << "" << r;
	}
	else
	{
		if (r == 0)
		{
			cout << "0" << endl;
		}
	}
	if (i > 0)
	{
		cout << "+";
		cout << "i";
		if (i != 1)
		{
			cout << "*";
			cout << "" << i;
			cout << endl;
		}
		else cout << endl;
	}
	if (i < 0)
	{
		cout << "-";
		cout << "i";
		if (i != (-1))
		{
			cout << "*";
			cout << "" << fabs(i);
			cout << endl;
		}
		else cout << endl;
	}
}
//add
void Complex::add(Complex a, Complex b)
{
	double r, i;
	r = a.Re + b.Re;
	i = a.Im + b.Im;
	printResult(r, i);
}
//multiply
void Complex::multiply(Complex a, Complex b)
{
	double r, i;
	r = a.Re * b.Re - a.Im * b.Im;
	i = a.Re * b.Im + b.Re * a.Im;
	printResult(r, i);
}
//substract
void Complex::substract(Complex a, Complex b)
{
	double r, i;
	r = a.Re - b.Re;
	i = a.Im - b.Im;
	printResult(r, i);
}
//devide
void Complex::devide(Complex a, Complex b)
{
	double r, i;
	r = (a.Re * b.Re + a.Im * b.Im) / (b.Re * b.Re + b.Im * b.Im);
	i = (b.Re * a.Im - a.Re * b.Im) / (b.Re * b.Re + b.Im * b.Im);
	printResult(r, i);
}
//menu
void Complex::menu(Complex a, Complex b)
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
	cout <<endl << "_____________________________________________" << endl;
	cout << endl;
	cout << "Press any button to continue. Press N to exit." << endl;
	cin >> op;
	if (op == 'N' || op == 'n')
	{
		exit(0);
	}
}