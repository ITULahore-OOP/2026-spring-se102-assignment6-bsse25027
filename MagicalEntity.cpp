#include "MagicalEntity.h"


// Constructor 
MagicalEntity::MagicalEntity(int mana, int spell)
{
    manaPool = mana;
    spellPower = spell;
}

// Getters 
int MagicalEntity::getMana() const
{
    return manaPool;
}

int MagicalEntity::getSpellPower() const
{
    return spellPower;
}
