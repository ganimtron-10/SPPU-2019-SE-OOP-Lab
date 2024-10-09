/*
Aledutron
SPPU 2019 SE OOP Lab
SPPU Computer Engineering Second Year (SE) Object Oriented Programming (OOP) Lab Assignments (2019 Pattern)
Youtube OOP Lab Playlist Link: https://youtube.com/playlist?list=PLlShVH4JA0otmMld-dvDBGxqqSNy1zlf3

Problem Statement:
Group-B/Q5.cpp
A book shop maintains the inventory of books that are being sold at the shop. The list includes details such as author, title, price, publisher and stock position. Whenever a customer wants a book, the sales person inputs the title and author and the system searches the list and displays whether it is available or not. If it is not, an appropriate message is displayed. If it is, then the system displays the book details and requests for the number of copies required. If the requested copies book details and requests for the number of copies required. If the requested copies are available, the total cost of the requested copies is displayed; otherwise the message Required copies not in stock is displayed. Design a system using a class called books with suitable member functions and Constructors. Use new operator in constructors to allocate memory space required. Implement C++ program for the system.

Explaination Video Link: https://www.youtube.com/watch?v=QVa--kTwZOA&list=PLlShVH4JA0otmMld-dvDBGxqqSNy1zlf3&index=4&pp=iAQB
*/

#include<iostream>
#include<vector>
using namespace std;


template<typename T>
vector<T> take_ip(int n){
	vector<T> v;

	for(int i = 0 ; i < n; i++){
		T x;
		cout << "Enter " << i+1 << " value: ";
		cin >> x;
		v.push_back(x);
	}

	return v;
}

/*
23,7,8,4
4,7,8,23



*/



template<typename dt>
int min_val(vector<dt>& v, int i, int n){
	dt min = v[i];
	int min_index = i;
	for(int ind = i; ind < n;ind++){
		if(v[ind] < min){
			min = v[ind];
			min_index = ind;
		}
	}

	return min_index;
}


template<typename dt>
void selection_sort(vector<dt>& v){
	int n = v.size();
	for(int i = 0; i < n-1; i++){
		int minvali = min_val<dt>(v,i,n);
		swap(v[i],v[minvali]);
	}
}


int main(){
	int n;
	cout << "Enter number of element: ";
	cin >> n;


	auto v = take_ip<char>(n);
	

	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
	cout << endl;
	selection_sort<char>(v);

	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}

}