/*
Aledutron
SPPU 2019 SE OOP Lab
SPPU Computer Engineering Second Year (SE) Object Oriented Programming (OOP) Lab Assignments (2019 Pattern)
Youtube OOP Lab Playlist Link: https://youtube.com/playlist?list=PLlShVH4JA0otmMld-dvDBGxqqSNy1zlf3

Problem Statement:
Group-B/Q4.cpp
Imagine a publishing company which does marketing for book and audio cassette versions. Create a class publication that stores the title (a string) and price (type float) of a publication. From this class derive two classes: book, which adds a page count (type int), and tape, which adds a playing time in minutes (type float).Write a program that instantiates the book and tape classes, allows user to enter data and displays the data members. If an exception is caught, replace all the data member values with zero values.

Explaination Video Link: https://www.youtube.com/watch?v=H9RyZ7ykjXk&list=PLlShVH4JA0otmMld-dvDBGxqqSNy1zlf3&index=3&pp=iAQB
*/

#include<iostream>
#include<fstream>
using namespace std;

int main(){

	// fstream file;

	// // modes
	// // in, out, app, bin

	// //open
	// file.open("test.txt", ios::out);
	// //execute
	// if(file.is_open()){
	// 	file << "Hello" << endl;
	// }
	// //close
	// file.close();

	// //open
	// file.open("test.txt", ios::app);
	// //execute
	// if(file.is_open()){
	// 	file << "Hello2" << endl;
	// }
	// //close
	// file.close();

	// string line,line2;
	// file.open("test.txt", ios::in);
	// if(file.is_open()){
	// 	getline(file,line);
	// 	getline(file,line2);
	// }
	// file.close();

	// cout << line << " " << line2;

	ifstream ifile;
	ofstream ofile;

	// ofile.open("test.txt");
	// ofile << "Hello" << endl;
	// ofile.close();

	// ofile.open("test.txt", ios::app);
	// ofile << "Hello2" << endl;
	// ofile.close();

	string line;
	ifile.open("test.txt");
	while(!ifile.eof()){
		ifile >> line;
		cout << line << endl;
	}
	ifile.close();

	// cout << line << " " << line2;
}