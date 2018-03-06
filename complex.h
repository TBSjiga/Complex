#ifndef CALCULATOR_H
#define CALCULATOR_H 
#include <iostream>
#include <math.h>

struct complex
{
	double Re;
	double Im;
};
typedef struct complex *Complex;

void printresult(double z1, double z2);
void menu(Complex a, Complex b);
void menu_1(double *Re, double *Im);
void menu_2(double *Re, double *Im);

Complex complexCreate(double *Re, double *Im);
Complex add(Complex a, Complex b);
Complex multiply(Complex a, Complex b);
Complex substract(Complex a, Complex b);
Complex devide(Complex a, Complex b);

#endif CALCULATOR_H
