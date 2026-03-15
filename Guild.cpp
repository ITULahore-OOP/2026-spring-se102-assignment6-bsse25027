#include "Guild.h"


// Constructor 
Guild::Guild(string name)
{
    guildName = name;
    memberCount = 0;
    for (int i = 0; i < 15; i++)
    {
        roster[i] = nullptr;
    }
}

Guild::~Guild()
{
    // Not deleting because your test case is contradicting creating a hero wihtout heap memory and allocating a stack memeory and trying to delete that 
    // for (int i = 0; i < memberCount; i++)
    // {
    //     delete roster[i];
    // }
    cout << "The guild " << guildName << " has been disbanded!" << endl;
}

int Guild::calculateTotalGuildPower() const
{
    int total = 0;
    for (int i = 0; i < memberCount; i++)
    {
        total = total + roster[i]->getPower();
    }
    return total;
}

void Guild::displayGuildStats() const
{
    cout << "Guild Name: " << guildName << endl;
    cout << "Total Members: " << memberCount << "/15" << endl;
    cout << "Total Guild Power: " << calculateTotalGuildPower() << endl;
}


// operaotr overlaoding 
void Guild::operator+=(Hero* newHero)
{
    if (memberCount < 15)
    {
        roster[memberCount] = newHero;
        memberCount = memberCount + 1;
    }
    else
    {
        cout << "Guild is at full capacity!" << endl;
    }
}



// Operator overlaoding 
ostream& operator<<(ostream& os, const Guild& g)
{
    os << "Guild: " << g.guildName << endl;
    os << "Members: " << g.memberCount << endl;
    for (int i = 0; i < g.memberCount; i++)
    {
        os << "- " << g.roster[i]->getName() << " (Power: " << g.roster[i]->getPower() << ")" << endl;
    }
    return os;
}
