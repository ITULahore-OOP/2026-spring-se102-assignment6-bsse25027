#ifndef MAGICALENTITY_H
#define MAGICALENTITY_H

class MagicalEntity
{
private:
    int manaPool;
    int spellPower;

public:
    MagicalEntity(int mana, int spell);

    int getMana() const;
    int getSpellPower() const;
};

#endif
