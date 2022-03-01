#include <string>
#include <iostream>

using namespace std;

class Stats
{
private:
    int str;
    int dex;
    int con;
    int intl;
    int wis;
    int cha;
    int strMod;
    int dexMod;
    int conMod;
    int intlMod;
    int wisMod;
    int chaMod;
public:
    Stats(/* args */);
    ~Stats();
    void displayStats();
    void inputStats ();
};

Stats::Stats(/* args */)
{
}

Stats::~Stats()
{
}

void Stats::inputStats(){
    string stats[6] = {"str", "dex", "con", "int", "wis", "char"};
    int arr[6];
    for(int i=0; i<6;i++){
        int input;
        cout << "Input your " << stats[i] << ": ";
        cin >> input;
        cout << endl;
        arr[i] = input;
    }
    str = arr[0];
    dex = arr[1];
    con = arr[2];
    intl = arr[3];
    wis = arr[4];
    cha = arr[5];
    strMod = (arr[0] - 10)/2;
    dexMod = (arr[1] - 10)/2;
    conMod = (arr[2] - 10)/2;
    intlMod = (arr[3] - 10)/2;
    wisMod = (arr[4] - 10)/2;
    chaMod = (arr[5] - 10)/2;
}

void Stats::displayStats(){
    cout << "str: " << str << " " << strMod << endl << "dex: " << dex << " " << dexMod << endl << "con: " << con << " " << conMod << endl << "int: " << intl << " " << intlMod << endl << "wis: " << wis << " " << wisMod << endl << "char: " << cha << " " << chaMod << endl;
}