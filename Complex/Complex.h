#include <iostream>
#include <string>

using namespace std;

//This class represens the complex numbers
class Complex {

private:
	double real;		
	double imag;

public:
	Complex(double r, double i);

	double get_imaginary();
	double get_real();
	void set(double r, double i);

	Complex add(Complex nr);
	Complex subtract(Complex nr);
	Complex multiply(Complex nr);
	Complex divide(Complex nr);
	Complex absolute();

	string text();
	
	void compute_polar();
	void print();
};
