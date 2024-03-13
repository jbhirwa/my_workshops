#include "workshop.h"

int main()
{
    int size = 10;
    int max = 0;
    double value = 9.0;

    double *darr = dynamicArray(size, value);
    printArray(darr, size);
    max = arrayMax(darr, size);
    cout << max;
    delete[] darr;
    return (0);
}
