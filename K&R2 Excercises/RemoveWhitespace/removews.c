#include <stdio.h>

#define MAXLINE 1000

int my_getline(char line[], int maxline);
int remove_ws(char line[]);

/* Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines
    get input
    check if space or tab at the end
    remove
    if empty lines
    remove
*/

int main(void)
{   
    int len;
    char line[MAXLINE];

    while ((len = my_getline(line, MAXLINE)) > 0)
        if (remove_ws(line) > 0)
            printf("%s", line);
    
    return 0;
}

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

int remove_ws(char line[])
{
    int i;

    for (i = 0; line[i] != '\n'; ++i)
        ;
    --i; 

    for (i > 0; line[i] == ' ' || line[i] == '\t'; --i)
        ;

    if (i >= 0)
    {
        ++i;
        line[i] = '\n';
        ++i;
        line[i] = '\0';
    }
    return i;
}