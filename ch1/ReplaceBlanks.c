#include <stdio.h>

/*
    Replaces all strings of multiple blanks with single blanks - leaving the rest of the strings the same.
*/
main()
{
    int currChar;
    int prevChar;

    while ((currChar = getchar()) != EOF) {
        if ((currChar == ' ') && (currChar == prevChar)) {
            /* Do nothing */
            ;
        } else {
            putchar(currChar);
        }
        prevChar = currChar;
    }
}
