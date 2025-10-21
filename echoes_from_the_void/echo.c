#include <stdio.h> // Adds standard input/output library. ".h" is the header file for C standard I/O functions.

int main() {
    char name[50]; //char type is used to store text (strings) in C. "name" is the variable name, and [50] allocates space for 50 characters.

    printf("🧙‍♂️ What is your name, apprentice? "); //printf function is used to output text to the console.
    scanf("%s", name); //scanf function is used to read formatted input from the console. "%s" indicates that a string will be read and stored in the variable "name".

    printf("🧙‍♂️ Welcome, %s! Your journey begins now.\n", name); // interpolated the scanned name into the output string
    return 0; // return 0 indicates that the program ended successfully. In C, the main function must return an integer.
}