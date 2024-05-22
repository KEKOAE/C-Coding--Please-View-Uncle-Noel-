//index = 0.0588 * L - 0.296 * S - 15.8
//L is the average number of letters per 100 words in the text, and S is the average number of sentences per 100 words in the text.


#include <stdio.h>
#include <ctype.h>
#include <string.h>

int letters; // This variable is declared outside of the function that is using it.

int main (void){
    string sentance = get_string("Enter your statement: "); // I don't think declaring string like his is kosher with C. 

    for (i = 0; i < len(sentance); i ++){ // Use strlen() from the string.h library to get the length of the string.
        letters += 1;
    }
    printf(letters, %d); // The printf function has incorrect syntax. It should be printf("%d\n", letters);.

    print("California"); // There is a typo in print("California"); which should be printf("California\n");.
}