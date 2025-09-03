#include<iostream>
using namespace std;


int addition() {
	int a,b;
	cout << "enter a " << "enter b :";
	cin >> a >> b;
	return a+b ;	
}	


int main() {
	cout << "Hello, World!" << endl;
	cout << "addition of two numbers :" << addition() << endl;
	return 0;

}
