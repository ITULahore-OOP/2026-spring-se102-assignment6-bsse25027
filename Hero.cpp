#include "Hero.h"


// Constructor 
Hero::Hero(string name, int hp, int power)
{
    heroName = name;
    health = hp;
    basePower = power;
}

// Destructor 

Hero::~Hero()
{
}

// getters
string Hero::getName() const
{
    return heroName;
}

int Hero::getHealth() const
{
    return health;
}

int Hero::getPower() const
{
    return basePower;
}

void Hero::takeDamage(int damage)
{
    health = health - damage;
    if (health < 0)
    {
        health = 0;
    }
}

bool Hero::operator>(const Hero &other) const
{
    return basePower > other.basePower;
}

int Hero::operator+(const Hero &other) const
{
    return health + other.health;
}
