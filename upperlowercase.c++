#include <iostream>
int main() {
    using namespace std;
    char ch;
    cout<<"enter character"<<std::endl;
    cin>>ch;
    if (isupper(ch)) {
        cout << ch << " upperccase" << endl;
    }
    else {
        cout << ch << " lowercase" << endl;
    }
    return 0;
}
