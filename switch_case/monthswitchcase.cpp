#include<iostream>
using namespace std;
int main() {
int month;
    cout<<"Enter Month (1 to 12): ";
    cin>>month ;
    switch (month) {
        case 1:
            cout << "January\n31 days" << endl;
            break;
        case 2:
            cout << "February\n28 days" << endl;
            break;
        case 3:
            cout << "March\n31 days" << endl;
            break;
        case 4:
            cout << "April\n30 days" << endl;
            break;
        case 5:
            cout << "May\n31 days" << endl;
            break;
        case 6:
            cout << "June\n30 days" << endl;
            break;
        case 7:
            cout << "July\n31 days" << endl;
            break;
        case 8:
            cout << "August\n31 days" << endl;
            break;
        case 9:
            cout << "September\n30 days" << endl;
            break;
        case 10:
            cout << "October\n31 days" << endl;
            break;
        case 11:
            cout << "November\n30 days" << endl;
            break;
        case 12:
            cout << "December\n31 days" << endl;
            break;
        default:
            cout << "Invalid month number!" << endl;

}
    return 0;
}