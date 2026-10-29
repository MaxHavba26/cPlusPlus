// Parker Beguin Oct 27 Coding1 2026
// cl /EHsc alien.cpp && alien.exe

#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

vector<string> worlds = {"Mars", "Argent D'nur", "Jupiter", "John Planet", "Dantooine"};

class alien {
public:
    
    
    string home;
    bool flight;
    int limbN;
    int lvl;

    alien(){
        home = worlds [rand() % worlds.size()];
        flight = rand() % 2;
        limbN = rand() % 7;
        lvl = limbN + (rand() % 3);
    }
    
    alien(string planet, bool canFly, int limbNumber, int threatLevel) {
        home = planet;
        flight = canFly;
        limbN = limbNumber;
        lvl = threatLevel;
    
    }

    void contact(){
        cout << "The alien from the planet of " << home;

        if (lvl > 5){
            cout << " wants to invade your world!";
        }

        else if (lvl < 5){
            cout << " comes in peace!";
        }

        else {
            cout << " needs to use the little extraterrestrials' room." << endl;
        }

        cout << " They have " << limbN << " limbs." << endl;
    }

    void depart(){
        cout << "The alien";
        
        if (flight == 0){
            if (limbN <= 1){
            cout << " shuffles away!" << endl;
            } 

            else {
            cout << " runs away!"<< endl;    
            
            } 
        }

        else {
            cout << " flies away!" << endl;
        }
    }

};

int main(){
    srand(time(0));
    
    alien Brian("Earth",false,4,4);
    
    Brian.contact();

    Brian.depart();

    alien Paul;
    
    Paul.contact();

    Paul.depart();

    return 0;
}