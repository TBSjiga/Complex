#ifndef COMPLEX_H
#define COMPLEX_H 
#include <iostream>
#include <math.h>
using namespace std;

class Complex
{
private:
	double Re;
	double Im;

public:
	Complex(double real, double imag);
	~Complex();
	void add(Complex a, Complex b);
	void multiply(Complex a, Complex b);
	void substract(Complex a, Complex b);
	void devide(Complex a, Complex b);
	void menu(Complex a, Complex b);
	void printResult(double r, double i);
};

#endif COMPLEX_H