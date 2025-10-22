#include <stdio.h> // Standard input/output library for C
#include <string.h> // Library for string handling functions

struct Spell { // structs are typically capitalized, like classes in other languages
    char name[50];
    int power;
    int mana_cost;
};

int main() { // Sidenote: Similar to other C-based languages functions must declare their return type. C# allows void return type for functions that don't return a value.
    struct Spell fireball; // Declare a variable of type struct Spell

    strcpy(fireball.name, "Fireball"); // strcpy is short for "string copy" and is used to copy a string into a char array
    fireball.power = 75;
    fireball.mana_cost = 20;

    // Sidenote: C requires the use of \n. C# for example has functions like Console.WriteLine that automatically add a new line. 
    printf("📖 Spell: %s\n", fireball.name);
    printf("✨ Power: %d\n", fireball.power);
    printf("💧 Mana Cost: %d\n", fireball.mana_cost);

    return 0;
}