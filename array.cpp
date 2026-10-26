//Pakrer Beguin Coding1 Fall 2026
// loops and lists

//cl/EHsc array.cpp && array.exe

#include <iostream>
#include <string>

using namespace std;

int main (){

    /* 
    string favGames[5];
    favGames[0] = "Shovel Knight";

    cout << "My favorite game is " << favGames[0] << endl;

    cout << "add another game" << endl;
    string input;
    getline (cin,input);
    favGames[1]=input;

    cout << "Favorite games is "<< endl;

    for(int i = 0; i < 5; i++){
        if (favGames[i] == ""){
            //this skips past the next commands in the loop
            continue;
        }
        cout << favGames[i] << endl;
    } 
    */

    string friends[] = {"Joey","Chandler","Pheobe","Monika","Ross"};
    for(int i = 0; i < 5; i++){
        if (friends[i] == ""){
            //this skips past the next commands in the loop
            continue;
        }
        cout << friends[i] << endl;
    } 

    cout << "Which friend should we remove?" << endl;
    string input;
    getline (cin, input);

    for (int i = 0; i < 5; i++){
        if(input == friends[i]){
            friends[i] = "";
        }
    }

    cout << "Here is the new group:"<<endl;

    for(int i = 0; i < 5; i++){
        if (friends[i] == ""){
            //this skips past the next commands in the loop
            continue;
        }
        cout << friends[i] << endl;
    } 

    for(int i = 0; i < 5; i++){
        if (friends[i] == ""){
            cout << "add a new friend"<<endl;
            getline(cin,input);
        }
    }
    
    for(int i = 0; i < 5; i++){
        if (friends[i] == ""){
            //this skips past the next commands in the loop
            continue;
        }
        cout << friends[i] << endl;
    } 


    return 0;
}