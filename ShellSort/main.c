#include <stdio.h>
#include <stdlib.h>

/* Worst case: O(n2) */

void shellshort(int v[], int n);

int main()
{
    int arr[10] = {9, 3, 4, 1, 7, 55, 21, 87, 43, 32};
    int i;

    shellshort(arr, 10);

    for (i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    return 0;
}


void shellshort(int v[], int n)
{
    int gap, i, j, temp;

    for (gap = n / 2; gap > 0; gap /= 2)
        for (i = gap; i < n; i++)
            for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap) {
                temp = v[j];
                v[j] = v[j + gap];
                v[j + gap] = temp;
            }
}