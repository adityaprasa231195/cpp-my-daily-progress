#include <iostream>
int main() {
    using namespace std;
    double salary;
    cout<<"enter salary :";
    cin>>salary;
    if (salary< 250000) {
        cout <<  "no tax" << endl;
    }
    else if ( salary <= 500000){
        cout << "5% tax" << endl;
    }
    else if (salary <= 1000000){
        cout << "20% tax" <<endl;
    }
    else{
        cout << "30% tax"<< endl;
    }
    
    return 0;
}
