#include<iostream>
using namespace std;


int addition() {
	int a,b;
	cout << "enter a " << "enter b :";
	cin >> a >> b;
	int addition = a + b;
	return addition ;	
}	


int main() {
	cout << "Hello, World!" << endl;
	cout << "addition of two numbers :" << addition() << endl;
	return 0;

}
