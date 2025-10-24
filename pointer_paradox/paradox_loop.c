#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Rune {
    char name[50];
    struct Rune* next;
};

int main() {
    struct Rune* r1 = malloc(sizeof(struct Rune)); // Create first rune
    struct Rune* r2 = malloc(sizeof(struct Rune));
    struct Rune* r3 = malloc(sizeof(struct Rune));

    strcpy(r1->name, "Echo");
    strcpy(r2->name, "Pulse");
    strcpy(r3->name, "Loop");

    r1->next = r2; // Link runes
    r2->next = r3;
    r3->next = r1; // Circular reference

    // Traverse with a limit to avoid infinite loop
    struct Rune* current = r1;
    int steps = 0;
    while (current != NULL && steps < 10) {
        printf("🔁 Rune: %s\n", current->name);
        current = current->next;
        steps++;
    }

    // Break the loop manually before freeing
    r3->next = NULL;
    free(r3);
    free(r2);
    free(r1);

    return 0;
}