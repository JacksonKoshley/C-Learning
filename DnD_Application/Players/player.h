#include <string>
#include "generic.h"
#include "stats.h"
using namespace std;

class Player: private Generic, private Stats
{
    private:
    public:
        void setGeneric();
        void printGeneric();
        void setStats();
        void printStats();
};

void Player::setGeneric(){
    inputGenericAttributes();
};

void Player::printGeneric(){
    displayGenericAttributes();
};

void Player::setStats(){
    inputStats();
};

void Player::printStats(){
    displayStats();
};

