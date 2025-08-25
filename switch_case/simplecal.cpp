#include<iostream>
using namespace std;
int main() {
double num1, num2;
    char opr;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
cout<<"Enter operation (+,-,/,*) : ";
    cin>>opr;
switch(opr) {
    case '+':
        cout<<num1+num2;
        break;
    case '-':
    cout<<num1-num2;
        break;
    case '/':
        cout<<num1/num2;
        break;
    case '*':
        cout<<num1*num2;
        break;
    default:
        cout<<"INVALID OPERATION !";
}
    return 0;
}