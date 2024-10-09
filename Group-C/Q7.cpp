/*
Aledutron
SPPU 2019 SE OOP Lab
SPPU Computer Engineering Second Year (SE) Object Oriented Programming (OOP) Lab Assignments (2019 Pattern)
Youtube DSAL Playlist Link: https://youtube.com/playlist?list=PLlShVH4JA0otmMld-dvDBGxqqSNy1zlf3

Problem Statement:
Group-C/Q7.cpp
Crete User defined exception to check the following conditions and throw the exception if the criterion does not meet.
a. User has age between 18 and 55
b. User stays has income between Rs. 50,000 – Rs. 1,00,000 per month
c. User stays in Pune/ Mumbai/ Bangalore / Chennai
d. User has 4-wheeler
Accept age, Income, City, Vehicle from the user and check for the conditions mentioned above. If any of the condition not met then throw the exception

Explaination Video Link: https://www.youtube.com/watch?v=Oy6kr7ob0E0&list=PLlShVH4JA0otmMld-dvDBGxqqSNy1zlf3&index=5&pp=iAQB
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

	unordered_map<string,int> sdb;

	sdb["s1"] = 46;
	sdb["s2"] = 78;
	sdb["s3"] = 943;

	string s;
	cout << "Enter name of the state: " ;
	cin >> s;
	cout << "State " << s << " has a population of " << sdb[s] << endl; 

}