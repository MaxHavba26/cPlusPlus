//Parker Beguin Coding1 Fall 2026
//-adventure 1.0

//cl  /EHsc adv.cpp && adv.exe

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
    srand (time(0));

    cout << "adventure time lmao" << endl;

    cout << "here are 10 random numbers" << endl;
    int counter = 0;
    while(counter < 10) {
        cout << (rand() % 10) + 1<< endl;
        counter++;
    }

    //create a chosen # variable
    int theNumber;
    //generate a random number then store it in the variable
    theNumber = (rand()%10) +1;
    //create a player guess variable
    int theGuess;
    //ask player to guess
    
    //allow player input and store that in the guess variable
    
    //if the chosen # matches the guess #, the player wins
    while(theGuess != theNumber){
        cout << "Guess a number between 1 and 10" << endl;
        cin >> theGuess;
        if (theGuess > theNumber){
            cout << "Too high!" << endl;
        }
        else if (theGuess < theNumber){
            cout << "Too low!" << endl;
        }
    }
    
    cout << "you got it!!!!!!!!!!!!" << endl;
    

    return 0;
}