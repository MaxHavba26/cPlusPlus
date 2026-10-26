//cl  /EHsc Fx.cpp && Fx.exe
//Parker Beguin Coding 1 Fall 2026

#include <iostream>
#include <string>
#include <vector>
//#include <c

using namespace std;

//declare and define

void Hello() {
    cout << "hi" << endl;
}

void Say(string word) {
    cout << word << endl;
}

void CoolSay(string word) {
    for(int i= 0; i < word.size(); i++) {
        cout << word [i]<< " ";
    } 
    cout << endl;
}

void dVector (vector<string> vec) {
    for (int i=0; i<vec.size(); i++) {
        cout << vec[i] << endl;
    }
}

int Mult3(int input) {
    return input * 3;
}

int Add(int numa, int numb) {
    return numa + numb;
}

bool AskYN(string que = "Keep Playing?(y/n)") {
    while (true){

        cout << que << endl;

        string input;
        getline(cin,input);
        if (input == "y") {
            return true;
        }
        else if (input == "n"){
            return false;
        }
        else {
            cout << "invalid" << endl;
        }
    }
}

int main() {
    //calling the functions
    Hello();
    Say("snork mimimi");
    CoolSay("What's for lunch");
    cout << Add(5,9) << endl;

    if (AskYN())    cout << "Let's go another round" << endl;
    else            cout << "Thankx for playing" << endl;

    vector<string> names = {"Charle","Luigi","AoWAGAGUAGAGARR"};
    dVector(names);
    Mult3();

    return 0;
}