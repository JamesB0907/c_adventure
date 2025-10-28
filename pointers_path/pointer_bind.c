#include <stdio.h> // Standard input/output library for C

int main() {
    int spell_power = 42; // Initialize an integer variable with a spell power value
    int* ptr = &spell_power; // Declare a pointer variable and assign it the address of spell_power. "*" indicates that ptr is a pointer to an integer.

    printf("🔮 Original spell power: %d\n", spell_power);
    printf("🧭 Pointer address: %p\n", (void*)ptr); // This syntax means "treat ptr as a pointer to void"
    printf("✨ Spell power via pointer: %d\n", *ptr); // Dereference the pointer to get the value it points to

    *ptr = 99;

    printf("\n🔧 Spell power has been reforged!\n");
    printf("🔮 New spell power: %d\n", spell_power); // Show the updated spell power
    printf("✨ Verified via pointer: %d\n", *ptr); // Dereference the pointer again to show the updated value

    printf("Which spell would you like to reforge? Input its power level: ");
    int target_spell;
    scanf("%d", &target_spell); // Read an integer input for the target spell power
    reforge_target_spell(&target_spell, 77); // Pass the address of target_spell to the function
    printf("🔮 Target spell has been reforged to power: %d\n", target_spell);
    return 0; // Indicate that the program ended successfully
}

// Bonus Challenge:  
// Create a function that takes a pointer and modifies the value it points to. Use it to reforge multiple spell powers.

void reforge_target_spell(int* spell_ptr, int new_power) {
    *spell_ptr = new_power; // Modify the value at the address pointed to by spell_ptr
}
