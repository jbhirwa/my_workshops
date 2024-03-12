#include "workshop.h"

double *dynamicArray(int N)
{
    double *darr = new double[N];
    for (int i = 0; i < 10; i++)
        darr[i] = i;
    return (darr);
}

double *dynamicArray(int N, double M)
{
    double *darr = new double[N];
    for (int i = 0; i < 10; i++)
        darr[i] = M;
    return (darr);
}