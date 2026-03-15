#ifndef GUILD_H
#define GUILD_H

#include "Hero.h"
#include <iostream>
using namespace std;


// class of guild 
class Guild
{
private:
    string guildName;
    Hero* roster[15];
    int memberCount;

public:
    Guild(string name);
    ~Guild();

    int calculateTotalGuildPower() const;
    void displayGuildStats() const;

    void operator+=(Hero* newHero);
    friend ostream& operator<<(ostream& os, const Guild& g);
};

#endif
