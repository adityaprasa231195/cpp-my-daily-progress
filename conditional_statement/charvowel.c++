#include <iostream>
int main() {
    using namespace std;
    char ch;
    cout<<"enter character"<<std::endl;
    cin>>ch;
    ch=tolower(ch);
     if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
        cout << ch << " is a vowel." << endl;
    return 0;
}
