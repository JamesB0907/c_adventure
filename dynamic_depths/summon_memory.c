#include <stdio.h> // Standard input/output library for C
#include <stdlib.h> // Standard library for memory allocation functions

int main() {
    int count;
    printf("📜 How many mana crystals shall we summon? ");
    scanf("%d", &count);

    // Summon memory
    int* crystals = malloc(count * sizeof(int)); // Allocate memory for 'count' integers
    if (crystals == NULL) { // Check if memory allocation was successful
        printf("❌ Memory summoning failed!\n");
        return 1; // Exit with error code
    }

    // Fill the crystals
    for (int i = 0; i < count; i++) { 
        crystals[i] = (i + 1) * 10; // Each crystal holds 10, 20, 30, ...
    }

    // Review the summoned crystals
    printf("\n🔍Mana Crystals:\n");
    for (int i = 0; i < count; i++) {
        printf(" 💎 Crystal %d: %d mana\n", i + 1, crystals[i]); // Display each crystal's mana
    }

    // Release the memory
    free(crystals); // Free the allocated memory
    printf("\n✅ The mana crystals have been released back to the void.\n");

    return 0; // Indicate that the program ended successfully
}

// Sidenote: C does not have garbage collection like some other languages (e.g., C# or Java). Therefore, it's crucial to manually free any dynamically allocated memory using the free() function to prevent memory leaks.

// malloc: Stands for "memory allocation" and is used to allocate a specified amount of memory during runtime.