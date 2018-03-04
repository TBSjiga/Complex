#include "calculator.h" 
#include <iostream> 
using namespace std;
complex add(complex a, complex b);
complex multiply(complex a, complex b);
complex substract(complex a, complex b);
complex devide(complex a, complex b);

int main()
{
	while (1)
	{
		complex a, b;
		char op, o;
		cout << "_____________________________________________" << endl;
		cout << "Enter Re and Im of the first complex:" << endl;
		cin >> a.Re >> a.Im;
		cout << endl;
		cout << "Enter Re and Im of the second complex:" << endl;
		cin >>b.Re >> b.Im;
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
		return 0;
		}
		cout << "_____________________________________________" << endl;
		cout << endl;
		cout << "Press any button to continue. Press N to exit." << endl;
		cin >> o;
		if (o == 'N' || o == 'n')
		{
			exit(0);
		}
	}
}
