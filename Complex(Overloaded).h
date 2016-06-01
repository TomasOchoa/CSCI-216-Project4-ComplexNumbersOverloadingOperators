/*
CSCI 216 Fundamentals of Programming II Spring 2015
Program #3: Complex numbers with class implementation
Author: Tomas Ochoa
Date Due: 16 February 2015

This header file defines a class for the complex numbers setting the funcitons
as public members and the user's input as private members.The public members contain the
functions that are necessary to perform complex aritmatic. The complex arithmatic functions
are also overloaded.
*/
#ifndef complex(Overloaded)_cpp
#define complex(Overloaded)_cpp

#include <iostream>
using namespace std;

// Declaration of a complex Class
class complexNum
{
	// Public members that can be accessed 
public:
	complexNum();												// Replaces default constructor
	complexNum(double x, double y);								// Create a fraction x/y
	complexNum(double x);										// create a fraction x/1
	~complexNum();												// replaces default destructor


	//Definitions of computation functions 
	friend complexNum operator +(complexNum, complexNum);		// add b to yourself
	friend complexNum operator -(complexNum, complexNum);		// subtract b to yourself
	friend complexNum operator *(complexNum, complexNum);		// multiply b to yourself
	friend complexNum operator /(complexNum, complexNum);		// divide b to yourself

	// input and output functions
	friend ostream& operator << (ostream&, complexNum);
	friend istream& operator >> (istream&, complexNum&);

	// Hidden memebers that have exclusive access
private:

	char    junk,
			i;

	double realNum,									// realNum and imaginary number of a compelx number
		   imaginaryNum;		
	int gcd(int, int);								// computes greatest common denominator of the
};													// numerator and denominator 

#endif //this ends the definition of "complex(Overloaded)_cpp" if it is not already defined