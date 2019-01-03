#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 1000 // Max input line size

int my_getline(char line[], int maxline);
void copy(char to[], char from[]);

// Print the longest input line

int main()
{
    int len;                // Current line length
    int max;                // Maximum length seen so far
    char line[MAXLINE];     // Current input line
    char longest[MAXLINE];  // Longest line saved here

    max = 0;

    while ((len = my_getline(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0)            // If there was a line
        printf("\n%s\nLENGTH: %d MAX: %d\n", longest, len, max);

    return 0;
}

// my_getline: Read a line into s, return length

int my_getline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

// copy: Copy 'from' into 'to'; assume to is big enough

void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
