#include <stdio.h>

/* Write a program to print a histogram of the lengths of words in
its input. It is easy to draw the histogram with the bars horizontal; a vertical
orientation is more challenging. */

// get input
// count length of words
// print length

int main()
{
    int c;
    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == ' ' || c == '\t')
            putchar('\n');
        else
            putchar('*');
    }

}