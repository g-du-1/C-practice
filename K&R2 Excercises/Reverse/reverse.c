#include <stdio.h>

#define MAX_LINE_LENGTH 1000

int my_getline(char line_array[], int maxline);
void reverse(char s[]);

/*
Write a function reverse (s) that reverses the character string s. Use it to write a program that reversesits input a line at a time.
*/

int main(void)
{   
    int line_length;
    char line_array[MAX_LINE_LENGTH];


    while ((line_length = my_getline(line_array, MAX_LINE_LENGTH)) > 0) {
        reverse(line_array);
        printf("%s", line_array);
    }

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

void reverse(char s[]) 
{
    int i, j;
    char temp;
    
    for (i = 0; s[i] != '\0'; ++i)
        ;
    --i;

    if (s[i] == '\n')
        --i;

    j = 0;

    while (j < i) {
        temp = s[j];
        s[j] = s[i];
        s[i] = temp;
        --i;
        ++j;
    }


}