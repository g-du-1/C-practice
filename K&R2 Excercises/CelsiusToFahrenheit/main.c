#include <stdio.h>
#include <stdlib.h>

// Prints Celsius - Fahrenheit table

int main()
{
    float celsius, fahr;
    int lower, upper, step;

    lower = 0;                  // Lower limit of temperature table
    upper = 100;                // Upper limit
    step = 5;                  // Step size

    celsius = lower;
    printf("%3s %6s\n", "C", "F");
    printf("%s\n", "----------");
    while (celsius <= upper) {
        fahr = celsius * (9.0/5.0) + 32;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
