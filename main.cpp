#include <iostream>
#include "Hero.h"
#include "Warrior.h"
#include "Knight.h"
#include "MagicalEntity.h"
#include "Spellblade.h"
#include "Guild.h"
using namespace std;

int main()
{

    // Main file 
    cout << "=== Hero Demo ===" << endl;
    Hero h1("Aragorn", 100, 50);
    Hero h2("Legolas", 80, 70);

    cout << h1.getName() << " HP: " << h1.getHealth() << " Power: " << h1.getPower() << endl;
    h1.takeDamage(30);
    cout << h1.getName() << " HP after damage: " << h1.getHealth() << endl;

    if (h2 > h1)
    {
        cout << h2.getName() << " is stronger than " << h1.getName() << endl;
    }

    cout << "Combined vitality: " << (h1 + h2) << endl;

    cout << endl << "=== Warrior Demo ===" << endl;
    Warrior w("Gimli", 100, 40, 10);
    cout << w.getName() << " effective health: " << w.calculateEffectiveHealth() << endl;

    cout << endl << "=== Knight Demo ===" << endl;
    Knight k("Arthur", 150, 60, 20, 25);
    cout << k.getName() << " burst damage: " << k.calculateBurstDamage() << endl;

    cout << endl << "=== Spellblade Demo ===" << endl;
    Spellblade sb("Gandalf", 90, 45, 5, 100, 55);
    cout << sb.getName() << " hybrid damage: " << sb.calculateHybridDamage() << endl;
    cout << sb.getName() << " mana: " << sb.getMana() << endl;

    cout << endl << "=== Guild Demo ===" << endl;
    Guild fellowship("Fellowship");

    // Adding heros via heap memory 

    fellowship += new Hero("Frodo", 60, 20);
    fellowship += new Warrior("Boromir", 120, 55, 15);
    fellowship += new Knight("Faramir", 130, 65, 18, 30);

    cout << fellowship;
    cout << endl;

    fellowship.displayGuildStats();

    return 0;
}
