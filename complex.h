#ifndef CALCULATOR_H
#define CALCULATOR_H 
#include <iostream>
#include <math.h>
typedef struct
{
	double Re;
	double Im;
}complex;
void printresult(double z1, double z2);
complex add(complex a, complex b);
complex multiply(complex a, complex b);
complex substract(complex a, complex b);
complex devide(complex a, complex b);

#endif CALCULATOR_H
