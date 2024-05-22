#include <stdio.h>
#include <ctype.h>
#include <cs50.h>
#include <string.h>

int main(void) {
    // Initialize letters to 0
    int letters = 0;

    // Get input string from the user
    char sentence[] = get_string("Enter your statement: ");

    // Loop through the string to count letters
    for (int i = 0; i < strlen(sentence); i++) {
        letters += 1;
    }

    // Print the number of letters
    printf("%d\n", letters);

    // Print "California"
    printf("California\n");

    return 0;
}