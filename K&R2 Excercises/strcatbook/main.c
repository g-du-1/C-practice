#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    char s[6] = "abc";
    char t[3] = "def";

    i = j = 0;

    while (s[i] != '\0')
        i++;
    while ((s[i++] = t[j++]) != '\0')
        ;

    return 0;
}
