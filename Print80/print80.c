#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 1000
#define LIMIT 5

int my_getline(char line_array[], int maxline);

/*
Write a program to print all input lines that are longer than 80 characters.
- Get input
- Store length
- IF more than 80 characters line_length
- Print them 
*/

int main()
{	
	int line_length;
	char line_array[MAX_LINE_LENGTH];

	while ((line_length = my_getline(line_array, MAX_LINE_LENGTH)) > 0)
		if (line_length > LIMIT) {
			printf("%s -- Length (%d) greater than limit! --\n", line_array, line_length - 1);
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
