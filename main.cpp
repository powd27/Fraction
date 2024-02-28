// Phanso.cpp

#include <iostream>
#include "fraction.h"
using namespace std;

int main()
{	
	Fraction fract1, fract2,result;
	cout << "nhap phan so thu nhat: " << endl;
	fract1.input();
	cout << "nhap phan so thu hai: " << endl;
	fract2.input();
	result = fract1.add(fract2);
	cout << "tong hai phan so la: ";
	result.print();
}
