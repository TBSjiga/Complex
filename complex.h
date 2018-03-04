#ifndef CALCULATOR_H
#define CALCULATOR_H 
#include <iostream>
#include <math.h>
struct complex
{
	double Re;
	double Im;
};
typedef struct complex * Complex;
void printresult(double z1, double z2);
void add(complex *a, complex *b);
void multiply(complex *a, complex *b);
void substract(complex *a, complex *b);
void devide(complex *a, complex *b);

#endif CALCULATOR_H
