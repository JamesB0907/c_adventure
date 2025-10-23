#include <stdio.h> // Standard input/output library for C
#include <string.h> // Library for string handling functions

struct Spell { // structs are typically capitalized, like classes in other languages
    char name[50];
    int power;
    int mana_cost;
};

int main() {
    struct Spell fireball; // Declare a variable of type struct Spell

    strcpy(fireball.name, "Fireball"); // strcpy is short for "string copy" and is used to copy a string into a char array
    fireball.power = 75;
    fireball.mana_cost = 20;

    // Sidenote: C requires the use of \n. C# for example has functions like Console.WriteLine that automatically add a new line. 

    printf("📖 Spell: %s\n", fireball.name);
    printf("✨ Power: %d\n", fireball.power);
    printf("💧 Mana Cost: %d\n", fireball.mana_cost);

    // Bonus Challenge: Create an array of spells and display them:

    struct Spell spellbook[3];
    strcpy(spellbook[0].name, "Magic Missile");
    spellbook[0].power = 40;
    spellbook[0].mana_cost = 10;

    strcpy(spellbook[1].name, "Lightning Bolt");
    spellbook[1].power = 60;
    spellbook[1].mana_cost = 15;

    strcpy(spellbook[2].name, "Healing Light");
    spellbook[2].power = 50;
    spellbook[2].mana_cost = 12;

    printf("\n🔍 Your Spellbook:\n");
    for (int i = 0; i < 3; i++) {
        printf("📖 Spell: %s\n", spellbook[i].name);
        printf("✨ Power: %d\n", spellbook[i].power);
        printf("💧 Mana Cost: %d\n", spellbook[i].mana_cost);
    }

    return 0;
}