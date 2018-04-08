#ifndef COMPLEX_H
#define COMPLEX_H 
#include <iostream>
#include <math.h>
using namespace std;

/*struct complex
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
Complex devide(Complex a, Complex b);*/

class Complex
{
public:
	void add(Complex a, Complex b);
	void multiply(Complex a, Complex b);
	void substract(Complex a, Complex b);
	void devide(Complex a, Complex b);
	void reading1();
	void reading2();
	void menu(Complex a, Complex b);
	void printResult(double r, double i);

private:
	double Re;
	double Im;
};

#endif COMPLEX_H