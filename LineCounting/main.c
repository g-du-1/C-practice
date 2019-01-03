#include <stdio.h>
#include <stdlib.h>


/* . Write a program to copy its input to its output, replacing each
tab by \ t, each backspace by \b, and each backslash by \ \ */

int main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            putchar('\\');
            putchar('t');
        }
        if (c == '\b')
        {
            putchar('\\');
            putchar('b');
        }
        if (c == '\\')
        {
            putchar('\\');
            putchar('\\');
        }
        if (c != '\t' && c != '\b' && c != '\\')
            putchar(c);
    }

}

/*

//  Write a program to copy its input to its output, replacing each
//  string of one or more blanks by a single blank.

int main()
{
    int c;


    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            while ((c = getchar()) == ' ');
            putchar(' ');
            if (c == EOF) break;
        }
        putchar(c);
    }

}

// Write a program to count blanks, tabs, and newline

int main()
{
    int bl, t, nl, c;

    bl = 0;
    t = 0;
    nl = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++bl;
        if (c == '\t')
            ++t;
        if (c == '\n')
            ++nl;
    }

    printf("Blanks: %d | Tabs: %d | New lines: %d \n", bl, t, nl);
}

// Count lines in input

int main()
{
    int c, nl;

    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;

    printf("%d\n", nl);
}

*/
