#include <stdio.h>
#include <stdlib.h>

// Print the value of EOF

main()
{
    printf("Value of EOF: %d", EOF);
}

/*

// Verify that the expression getchar() != EOF

int main()
{
    printf("%d\n", getchar() != EOF);
}


// Second version

main()
{
    int c;

    while ((c = getchar()) != EOF)
        putchar(c);
}


// Copy input to output 1st version

main()
{
    int c;

    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }

}

*/
