#include <stdio.h> // Standard input/output library for C

int main() {
    int limit;

    printf("🔮 Apprentice, how many steps shall we take? ");
    scanf("%d", &limit); // Read an integer input for the number of steps. "&" is used to get the address of the variable.

    printf("\n🌀The For Loop:\n");
    for (int i = 1; i <= limit; i++) { // For loop that iterates from 1 to the user-defined limit
        printf(" Step %d\n", i); // Print the current step number
    }

    printf("\n🔄The While Loop:\n");
    int j = 1;
    while (j <= limit) { // While loop that continues as long as j is less than or equal to limit
        printf(" Step %d\n", j); // Print the current step number
        j++; // Increment j by 1
    }

    printf("\n➰The Do-While Loop:\n"); // Somehow still exists in many languages...
    int k = 1;
    do {
        printf(" Step %d\n", k); // Print the current step number
        k++; // Increment k by 1
    } while (k <= limit);

    printf("\n✅ The ritual is complete, apprentice!\n");
    return 0; // Indicate that the program ended successfully
}