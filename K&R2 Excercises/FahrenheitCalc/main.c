#include <stdio.h>
#include <stdlib.h>

#define LOWER 0     // Lower limit of table
#define UPPER 300   // Upper limit
#define STEP  20    // Step size

// Prints Fahrenheit - Celsius table

int main()
{
    int fahr;
    printf("%3s %6s\n", "F", "C");
    printf("%s\n", "----------");
    for (fahr = UPPER; fahr >= LOWER; fahr -= STEP)
        printf("%3d %6.1f \n", fahr, (5.0/9.0) * (fahr - 32));
}

/*

OLD

int main()
{
    int fahr;
    printf("%3s %6s\n", "F", "C");
    printf("%s\n", "----------");
    for (fahr = 300; fahr >= 0; fahr -= 20)
        printf("%3d %6.1f \n", fahr, (5.0/9.0) * (fahr - 32));
}

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;                  // Lower limit of temperature table
    upper = 300;                // Upper limit
    step = 20;                  // Step size

    fahr = lower;
    printf("%3s %6s\n", "F", "C");
    printf("%s\n", "----------");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

*/
