#include <stdio.h>

/* Write a program to print a histogram of the frequencies of different
characters in its input. */

void main() {

    int i, c, count_a, count_b, count_c, count_d, count_other;
    count_a = count_b = count_c = count_d = count_other = 0;

    while ((c = getchar()) != EOF) {
        if (c == 'a')
            count_a++;
        else if (c == 'b')
            count_b++;
        else if (c == 'c')
            count_c++;
        else if (c == 'd') 
            count_d++;
        else
            count_other++;
    }

    printf("a: ");
    for (i = 0; i < count_a; i++) {
        putchar('=');
    }

    printf("\nb: ");
    for (i = 0; i < count_b; i++) {
        putchar('=');
    }

    printf("\nc: ");
    for (i = 0; i < count_c; i++) {
        putchar('=');
    }

    printf("\nd: ");
    for (i = 0; i < count_d; i++) {
        putchar('=');
    }

    printf("\nother: \n");
    for (i = 0; i < count_other; i++) {
        putchar('=');
    }
}