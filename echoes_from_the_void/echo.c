#include <stdio.h> // Adds standard input/output library. ".h" is the header file for C standard I/O functions.

int main() {
    char name[50]; //char type is used to store text (strings) in C. "name" is the variable name, and [50] allocates space for 50 characters.

    printf("🧙‍♂️ What is your name, apprentice? "); //printf function is used to output text to the console.
    scanf("%s", name); //scanf function is used to read formatted input from the console. "%s" indicates that a string will be read and stored in the variable "name".

    printf("🧙‍♂️ Welcome, %s! Your journey begins now.\n", name); // interpolated the scanned name into the output string
    formal_greeting();
    return 0; // return 0 indicates that the program ended successfully. In C, the main function must return an integer.

}

// Bonus Challenge:  
// Modify the program to ask for both first and last name, then greet the user with full formality.

int formal_greeting() {
    char first_name[50];
    char last_name[50];

    printf(" 🧙‍♂️ What is thy full name, apprentice wizard? ");
    scanf("%s %s", first_name, last_name); // hmmm returns the first name twice instead of first and last name
    printf(" 🧙‍♂️ Welcome to your first lesson, %s %s! May your skills flourish.\n", first_name, last_name);

    return 0;
}