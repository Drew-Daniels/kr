#include <stdio.h>

/*
    Function that replaces all tabs, backspaces, and backslashes with 'Z'
*/
main()
{
    int c;
    while((c = getchar()) != EOF) {
        if (c == '\t' || c == '\b' || c == '\\') {
            putchar('Z');
        } else {
            putchar(c);
        }
    }
}
