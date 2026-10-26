//Parker Beguin Coding 1 Fall 2026
//cl /EHsc adv2.cpp && adv2.exe

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

//Global
int health = 10;
int heldGold = 0;
int danger = 1;    
bool debug = true;

string askYN(string prompt){
    while (true){
        string input;
        cout << prompt << " (y/n)" <<endl;
        cin >> input;
        
        if (input == "y"||input == "n" ){
            return input;
        }
    }

}

int Die(int max = 5, int min = 1){
    if(debug){
        cout << "max is " << max + min << "\nmin is " << min << endl;
    }
    
    return rand() % (max + min) + min;
}

void encounter(){
    int playMove = Die();
    int nmeMove = Die(danger / 2, 1);

    if(debug){
        cout << "playmove is " << playMove << "\nnmeMove is " << nmeMove << endl;
    }

    if(playMove >= nmeMove){
        danger += 2;
        heldGold += danger % 5 ;
        cout << "You won! You now have " << heldGold << " gold." <<endl;
    }

    else{
        health -= nmeMove;
        cout <<"You lost! You are now at " << health << " health." <<endl;
    }


}

void ending(){
    if (health <= 0){
        cout << "You are dead! You lost " << heldGold << " gold." << endl;
    }

    else {
        cout << "You left with " << health << " health remaining and " << heldGold << " gold." << endl;
    }
}

int main () {
    srand(time(0));
    cout << "WELCOME TO ADV2"<<endl;
    if (askYN("Are you ready?")=="n"){
        return 0;
    }

    while(true){
        encounter();
        if (health <= 0){
            ending();
            return 0;
        }
        else if (health < danger){
            cout << "You seem to be low on health"<< endl;
            if(heldGold >= 10 && askYN("See the doctor?")=="y"){
                health += 10;
                heldGold -= 10;
                ending();
            }
        }        
        if (askYN("Keep going?")=="n"){
        ending();
        return 0;
        }

    }

    return 0;
}