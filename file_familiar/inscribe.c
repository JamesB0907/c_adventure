#include <stdio.h>

int main() {
    FILE* scroll = fopen("spellbook.txt", "w");
    if (scroll == NULL) {
        printf("❌ Failed to inscribe the spellbook.\n");
        return 1;
    }

    fprintf(scroll, "Fireball 75 20\n");
    fprintf(scroll, "Ice Lance 60 15\n");
    fprintf(scroll, "Arcane Bolt 50 10\n");

    fclose(scroll); // What happens if we don't close the file?
    printf("✅ Spellbook inscribed.\n");

    // Now summon the spellbook
    scroll = fopen("spellbook.txt", "r");
    if (scroll == NULL) {
        printf("❌ Failed to summon the spellbook.\n");
        return 1;
    }

    char name[50];
    int power, mana_cost;

    printf("\n📜 Summoned Spellbook:\n");
    while (fscanf(scroll, "%s %d %d", name, &power, &mana_cost) == 3) {
        printf("  ✨%s - Power: %d, Mana Cost: %d\n", name, power, mana_cost);
    }

    fclose(scroll);
    return 0;
}