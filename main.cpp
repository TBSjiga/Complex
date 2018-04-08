#include "complex.h" 

int main()
{
	while (1)
	{
		Complex complex;
		Complex a;
		a.reading1();

		Complex b;
		b.reading2();

		complex.menu(a, b);
	}
}