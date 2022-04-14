#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include <assert.h>
#include "Complex.h"

using namespace std;

Complex::Complex(double r, double i) {
	real = r;
	imag = i;
}

double Complex::get_imaginary() {
	return imag;
}

double Complex::get_real() {
	return real;
}

void Complex::set(double r, double i) {
	real = r;
	imag = i;
}

Complex Complex::add(Complex nr) {
	Complex object(0, 0);

	object.real = this->real + nr.real;
	object.imag = this->imag + nr.imag;

	return object;
}

Complex Complex::subtract(Complex nr) {
	Complex object(0, 0);

	object.real = this->real - nr.real;
	object.imag = this->imag - nr.imag;

	return object;
}

Complex Complex::multiply(Complex nr) {
	Complex object(0, 0);

	object.real = this->real * nr.real;
	object.imag = this->imag * nr.imag;

	return object;
}

Complex Complex::divide(Complex nr) {
	Complex object(0, 0);

	object.real = this->real / nr.real;
	object.imag = this->imag / nr.imag;

	return object;
}

Complex Complex::absolute() {
	Complex object(0, 0);

	object.real = abs(this->real);
	object.imag = abs(this->imag);

	return object;
}

string Complex::text() {
	stringstream buffer;
	buffer << "\nReal: " << this->real << "\nImaginary: " << this->imag;
	return buffer.str();
}

void Complex::compute_polar() {
	/*
	z=a+b*i
	a=real
	b=imag
	z=r(cos(phi) +i*sin(phi))
	r=sqrt(a^2+b^2)
	phi=arctan(b/a)
	*/
	double r, phi;

	r = sqrt(this->real * this->real + this->imag * this->imag);
	phi = atan(this->imag / this->real);

	cout << "\nRadial polar coordinate (r): " << r;
	cout << "\nAngular polar coordinate (phi): " << phi;
}

void Complex::print() {
	cout << "\nReal: " << this->real;
	cout << "\nImaginary: " << this->imag;
	cout << endl;
}
