#include <stdio.h> // Standard input/output library for C

// Function that prints the spell's stats
void review_spell(char name[], int power, int mana_cost) {
    printf("📜 Spell: %s\n", name);
    printf("✨ Power: %d\n", power);
    printf("💧 Mana Cost: %d\n", mana_cost);
}

//Function that reforges the spell's power via pointer
void reforge_spell(int* power) {
    *power += 25; // Increase the spell's power by 25
    printf("🔧 The spell has been reforged! New power: %d\n", *power);
}

int main() {
    char name[] = "Arcane Bolt";
    int power = 50;
    int cost = 10;

    review_spell(name, power, cost); // Review the spell before reforging
    reforge_spell(&power); // Reforge the spell by passing the address of power
    review_spell(name, power, cost); // Review the spell after reforging

    return 0; // Indicate that the program ended successfully
}

// Not only does this example demonstrate functions, it also teaches how to refactor code for reusability and how to use pointers to modify variables within functions.

