#include<iostream>
using namespace std;

/*
class classname{
	access:
		data member
};
*/

class Mobile{
	public:
		int battery;
		string model_name;
		float height;
		float width;

		Mobile(){
			battery = 0;
			model_name = "";
			height = 0;
			width = 0;
		}

		Mobile(int b, string mn, int h, int w){
			battery = b;
			model_name = mn;
			height = h;
			width = w;
		}

		void printdata(){
			cout << endl;
			cout << battery << endl;
			cout << model_name << endl;
			cout << height << endl;
			cout << width << endl;
			cout << endl;
		}
};


int main(){
	Mobile m1;
	m1.printdata();

	Mobile m2(100,"Iphone 14",6,5);
	m2.printdata();
}