/*
CSCI 216 Fundamentals of Programming II Spring 2015
Program #2: Complex numbers
Author: Tomas Ochoa
Date Due: 16 February 2015

This file defines is the part of the program that calls the functions and uses the complex
header file in the directory. Notice the operators are overloaded which leads to a much 
more simple and cleaner code.

*/
#include <iostream>
#include "complex(Overloaded).h"
#include <iomanip>

using namespace std;

int main()
{
	//declares three complex number variables
	complexNum  a,
				b,
		        r;

	//gets the complex numbers and sets to a and b
	cout << "Enter two complex numbers in the form a+bi: ie 2-6i" << endl;
	cout << "a = ";
	cin  >> a;
	cout << "b = ";
	cin  >> b;

	//clears screen
	system("CLS");
	
	//prints user's input
	cout << "Your input:" << endl
		 << "a = " << a;

	cout << endl << "b = " << b << endl;

	//adds a and b and sets the result to r and prints it
	r = a + b;
	cout << endl << "The sum of a and b is: " << r << endl;

	//subtracts a and b and sets the result to r and prints it
	r = a - b;
	cout << "The difference of a and b is: " << r << endl;
	
	//multiplies a and b and sets the result to r and prints it
	r = a * b;
	cout << "The product of a and b is: " << r << endl;
	
	//divides a and b and sets the result to r and prints it
	r = a / b;
	cout << "The quotient of a and b is: " << r << endl;

	system("Pause");
	return 0;
}

//************************************   OUTPUT   *************************************************

/*

Enter two complex numbers in the form a+bi: ie 2-6i
a = 3
+4
i

b = 2
-6
i

*** CLEAR SCREEN (for neatness) ***

Your input:
a = 3+4i
b = 2-6i

The sum of a and b is: 5-2i
The difference of a and b is: 1+10i
The product of a and b is: 30-10i
The quotient of a and b is: -0.45+0.65i
Press any key to continue . . .

*/