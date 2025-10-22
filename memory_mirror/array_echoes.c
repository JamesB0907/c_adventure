#include <stdio.h> // Standard input/output library for C

int main() {
    int spells[5]; // Declare an array of 5 integers to store spell power levels

    printf("📜 Enter 5 spell powers: \n");
    for (int i = 0; i < 5; i++) {
        printf(" Spell %d power: ", i + 1); // Prompt for each spell power
        scanf("%d", &spells[i]); // Read each spell power and store it in the array
    }
        printf("\n🔍 Reviewing your spellbook: \n");
        for (int i = 0; i < 5; i++) {
            printf(" ✨ Spell %d power: %d\n", i + 1, spells[i]); // Print each spell power
        }
        return 0;
}