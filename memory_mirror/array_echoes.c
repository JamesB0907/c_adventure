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
        dynamic_spellbook();
        return 0;

}

// Bonus Challenge:  
// Allow the user to choose how many spells to store (up to 100), then dynamically fill and review the array.

int dynamic_spellbook() {
    int spell_slots;
    printf(" 📜 How many pages does your spellbook contain? (1-100): ");
    scanf("%d", &spell_slots);
    if (spell_slots < 1 || spell_slots > 100) {
        printf(" ⚠️ Please choose a number between 1 and 100.\n");
        return dynamic_spellbook(); // Recursively call until valid input is received
    }
    int *spells = malloc(spell_slots * sizeof(int)); // Dynamically allocate memory for the spells

    for (int i = 0; i < spell_slots; i++) {
        printf(" Spell %d power: ", i + 1);
        scanf("%d", &spells[i]);

    }
    printf(" \n🔍 Reviewing your spellbook: \n");
    for (int j = 0; j < spell_slots; j++) {
        printf(" ✨ Spell %d power: %d\n", j + 1, spells[j]);
    }
    free(spells);
    return 0;
}