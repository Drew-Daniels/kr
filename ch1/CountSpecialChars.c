#include <stdio.h>

/* Counts all spaces, tabs, and newlines */
main()
{   
    int c, count;

    count = 0;
    while ((c = getchar()) != EOF)
        if (c == ' ')
            ++count;
        if (c == '\t')
            ++count;
        if (c == '\n')
            ++count;
    printf("%d\n", count);
}