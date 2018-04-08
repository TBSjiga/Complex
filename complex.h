#ifndef COMPLEX_H
#define COMPLEX_H 
#include <iostream>
#include <math.h>
using namespace std;

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