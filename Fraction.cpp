#include "Fraction.h"
#include <iostream>
using namespace std;
void Fraction::input() 
{
	cout << "nhap tu so: ";
	cin >> Numerator;
	do {
		cout << "nhap mau so: ";
		cin >> Denominator;
		if (Denominator == 0) {
			cout << "nhap lai!!" << endl;
		}
	} while (Denominator == 0);
	cout << endl;
}
void Fraction::print() const {
	cout << Numerator << "/" << Denominator << endl;
}
Fraction Fraction::add(const Fraction &a) const {
	Fraction fract3;
	fract3.Numerator = Numerator * a.Denominator + a.Numerator * Denominator;
	fract3.Denominator = Denominator * a.Denominator;
	return fract3 ;
}