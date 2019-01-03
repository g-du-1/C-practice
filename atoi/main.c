#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    char s[3] = "534";

    n = 0;

    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');

    printf("%d", n);
}
