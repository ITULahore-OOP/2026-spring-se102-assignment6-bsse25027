#ifndef WARRIOR_H
#define WARRIOR_H

#include "Hero.h"
// Warriro class 
class Warrior : public Hero
{
private:
    int armorRating;

public:
    Warrior(string name, int hp, int power, int armor);

    int getArmor() const;
    int calculateEffectiveHealth() const;
};

#endif
