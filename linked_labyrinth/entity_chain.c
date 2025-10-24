#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Entity {
    char name[50];
    int hp;
    struct Entity* next;
};

void print_chain(struct Entity* head) {
    struct Entity* current = head;
    while (current != NULL) {
        printf("🧍 %s — HP: %d\n", current->name, current->hp); // New Syntax: "->" is used to access members of a struct through a pointer
        current = current->next;
    }
}

int main() {
    // Create first entity
    struct Entity* e1 = malloc(sizeof(struct Entity));
    strcpy(e1->name, "Knight");
    e1->hp = 100;

    // Create second entity
    struct Entity* e2 = malloc(sizeof(struct Entity));
    strcpy(e2->name, "Archer");
    e2->hp = 80;

    //Link them
    e1->next = e2;
    e2->next = NULL;

    // Traverse the chain
    print_chain(e1);

    // Release memory
    free(e2);
    free(e1);

    return 0;
}