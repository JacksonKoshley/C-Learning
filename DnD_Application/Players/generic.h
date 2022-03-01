#include <string>
#include <iostream>
using namespace std;

class Generic
{
    private:
        string characterName;
        string characterClass;
        string characterBackground;
        string playerName;
        string characterRace;
        string characterAlignment;
    public:
        Generic();
        void inputGenericAttributes();
        void displayGenericAttributes();
};

Generic::Generic(){
    string input;
    
    cout << "Please Enter Character Name: ";
    cin >> input;
    cout << endl;
    characterName = input;

    cout << "Please Enter Character Class: ";
    cin >> input;
    cout << endl;
    characterClass = input;

    cout << "Please Enter Character Background Type: ";
    cin >> input;
    cout << endl;
    characterBackground = input;

    cout << "Please Enter Your Name: ";
    cin >> input;
    cout << endl;
    playerName = input;

    cout << "Please Enter Character Race: ";
    cin >> input;
    cout << endl;
    characterRace = input;

    cout << "Please Enter Character Alignment: ";
    cin >> input;
    cout << endl;
    characterAlignment = input;
};

void Generic::inputGenericAttributes(){
    string input;
    cout << "IN SET GENERIC ATT" << endl;
    
    cout << "Please Enter Character Name: ";
    cin >> input;
    cout << endl;
    characterName = input;

    cout << "Please Enter Character Class: ";
    cin >> input;
    cout << endl;
    characterClass = input;

    cout << "Please Enter Character Background Type: ";
    cin >> input;
    cout << endl;
    characterBackground = input;

    cout << "Please Enter Your Name: ";
    cin >> input;
    cout << endl;
    playerName = input;

    cout << "Please Enter Character Race: ";
    cin >> input;
    cout << endl;
    characterRace = input;

    cout << "Please Enter Character Alignment: ";
    cin >> input;
    cout << endl;
    characterAlignment = input;
};

void Generic::displayGenericAttributes(){
    cout << "Character Name: " << characterName << endl << "Character Class: " << characterClass << endl << "Character Background: " << characterBackground << endl << "Player Name:" << playerName << endl << "Character Race: " << characterRace << endl << "Character Alignment: " << characterAlignment << endl;
};