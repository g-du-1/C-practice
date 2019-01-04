#include <stdio.h>
#include <time.h>

#define MAX_ELEMENT 20000

int binsearch_1(int x, int v[], int n);
int binsearch_2(int x, int v[], int n);

int main(void)
{
    int testdata[MAX_ELEMENT];
    int index;
    int n = -1; /* Worst case */
    int i;
    clock_t time_taken;

    for (i = 0; i < MAX_ELEMENT; ++i)
        testdata[i] = i;

    for (i = 0, time_taken = clock(); i < 100000; ++i) {
        index = binsearch_2(n, testdata, MAX_ELEMENT);
    }

    time_taken = clock() - time_taken;

    if (index < 0)
        printf("Element %d not found.\n", n);
    else
        printf("Element %d found at index %d,\n", n, index);

    printf("Binary search took %lu clocks (%lu seconds)\n",
           (unsigned long) time_taken,
           (unsigned long) time_taken / CLOCKS_PER_SEC);

    return 0;
}

int binsearch_1(int x, int v[], int n) {
    int low, mid, high;

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else
            return mid;
    }
    return -1;
}


int binsearch_2(int x, int v[], int n) {
    int low, high, mid;

    low = 0;
    high = n - 1;

    while (low <= high && x != v[mid = (low + high) / 2]) {
        if (x < v[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    return (x == v[mid] ? mid : -1);
}
