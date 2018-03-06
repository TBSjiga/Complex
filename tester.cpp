#include "calculator.h" 
#include <iostream> 
using namespace std;
int main()
{
	while (1)
	{
		double Re = 0, Im = 0;

		menu_1(&Re, &Im);
		Complex a = complexCreate(&Re, &Im);

		menu_2(&Re, &Im);
		Complex b = complexCreate(&Re, &Im);

		menu(a,b);
	}
}
