/*
CSCI 216 Fundamentals of Programming II Spring 2015
Program #2: Complex numbers
Author: Tomas Ochoa
Date Due: 16 February 2015

This file contains all the functions used in the program to compute the
addition, subtraction, multiplication and division of complex numbers. These
functions use overloaded operators that create a clean and neat flow of code.

*/
#include "complex(Overloaded).h"

// replaces the default constructor
complexNum::complexNum()										
{
	realNum = imaginaryNum = 1;
	return;
}
// creates a complex num
complexNum::complexNum(double x, double y)						
{
	realNum = x;
	imaginaryNum = y;
	return;
}
// creates  complex num without imaginary part
complexNum::complexNum(double x)
{
	realNum = x;
	imaginaryNum = 1;
	return;
}
// replaces default destructor
complexNum::~complexNum()										
{
	return;
}
// The addition function utilizing an overloading the operator
complexNum operator+(complexNum x,complexNum y)
{
	complexNum result;

	result.realNum = (x.realNum + y.realNum);
	result.imaginaryNum = (x.imaginaryNum + y.imaginaryNum);
	result.i = 'i';

	return result;
}
// The subtraction function utilizing an overloading the operator
complexNum operator-(complexNum x,complexNum y)
{
	complexNum result;

	result.realNum = (x.realNum - y.realNum);
	result.imaginaryNum = (x.imaginaryNum - y.imaginaryNum);
	result.i = 'i';

	return result;
}
// The multiplication function utilizing an overloading the operator
complexNum operator*(complexNum x, complexNum y)
{
	complexNum result;

	result.realNum = ((x.realNum * y.realNum) - (x.imaginaryNum * y.imaginaryNum));
	result.imaginaryNum = ((x.imaginaryNum * y.realNum) + (x.realNum * y.imaginaryNum));
	result.i = 'i';

	return result;
}
// The division function utilizing an overloading the operator
complexNum operator/(complexNum x, complexNum y)
{
	complexNum result;

	result.realNum = ((x.realNum * y.realNum) + (x.imaginaryNum * y.imaginaryNum)) / ((y.realNum * y.realNum) + (y.imaginaryNum * y.imaginaryNum));
	result.imaginaryNum = ((x.imaginaryNum * y.realNum) - (x.realNum * y.imaginaryNum)) / ((y.realNum * y.realNum) + (y.imaginaryNum * y.imaginaryNum));
	result.i = 'i';

	return result;
}

ostream& operator <<(ostream& out, complexNum x)
{
	if (x.imaginaryNum >= 0)
	{
		x.junk = '+';
		out << x.realNum << x.junk << x.imaginaryNum << x.i;
	}
	else
		out << x.realNum << x.imaginaryNum << x.i;
	return out;
}

istream& operator >>(istream& in, complexNum& x)
{
	in >> x.realNum;
	in >> x.imaginaryNum;
	in >> x.i;

	return in;
}

// Old greatest common denominator function
int gcd(int x, int y)
{
	int rem;

	if (y == 0)
	{
		cerr << "divisr = 0!" << endl;
		exit(10);
	}

	rem = x % y;
	while (rem > 0)
	{
		x = y;
		y = rem;
		rem = x % y;
	}
	return y;
}
