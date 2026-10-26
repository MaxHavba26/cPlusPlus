//Parker Beguin Coding1 Fall 2026

//cl  /EHsc start.cpp && start.exe

#include <iostream>
#include <string>

using namespace std;


int main() {
    string input;
    int count = 10;
    cout << "Feed me Seymour" << endl;

    cin >> input;
    getline (cin, input);
    cout << input << "." << endl;

    while (count > 0) {
        cout << "Hello " << count << endl;
        if (count % 2 == 0 ) {
            cout << "even" << endl;
        }
        else {
            cout << "odd" << endl;
        }
        count -= 1;
    }
    
    return 0;
}