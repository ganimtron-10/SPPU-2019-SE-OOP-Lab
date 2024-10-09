/*
Aledutron
SPPU 2019 SE OOP Lab
SPPU Computer Engineering Second Year (SE) Object Oriented Programming (OOP) Lab Assignments (2019 Pattern)
Youtube OOP Lab Playlist Link: https://youtube.com/playlist?list=PLlShVH4JA0otmMld-dvDBGxqqSNy1zlf3

Problem Statement:
Group-A/Q1.cpp
Implement a class Complex which represents the Complex Number data type. Implement
the following
1. Constructor (including a default constructor which creates the complex number 0+0i).
2. Overloaded operator+ to add two complex numbers.
3. Overloaded operator* to multiply two complex numbers.4. Overloaded << and >> to
print and read Complex Numbers.

Explaination Video Link: https://www.youtube.com/watch?v=q-IunMimiKg&list=PLlShVH4JA0otmMld-dvDBGxqqSNy1zlf3&index=2&pp=iAQB
*/

#include<iostream>
using namespace std;

class Complex{
public:
	float real;
	float img;

	Complex(){
		real = 0;
		img = 0;
	}

	Complex(float a, float b){
		real = a;
		img = b;
	}

	void print(){
		cout << real << " + " << img << "i" << endl;
	}

	Complex operator+(Complex c2){
		Complex temp;
		temp.real = real + c2.real;
		temp.img = img + c2.img;
		return temp;
	}

	
};

Complex operator*(Complex c1, Complex c2){
	Complex temp;
	temp.real = (c1.real * c2.real) - (c1.img * c2.img);
	temp.img = (c1.real * c2.img) + (c1.img * c2.real);

	return temp;
}

ostream& operator<<(ostream& COUT, Complex c1){
	COUT << c1.real << " + " << c1.img << "i" << endl;
}

istream& operator>>(istream& CIN, Complex& c){
	CIN >> c.real >> c.img;
}

int main()
{
	Complex z1; // default constructor
	Complex z2(2,6); // parameterised constructor

	Complex z3 = z1 + z2; // operator+

	cout << z3 << z2; // operator<<

	Complex z4;
	cout << "Enter real and img part for a complex number: ";
	cin >> z4; // operator>>

	cout << z4; // operator<<


	cout << z3*z4; // operator*

}