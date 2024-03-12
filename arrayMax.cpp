#include "workshop.h"

double arrayMax(double *d, int a)
{
    double max = *d;
    for (int i = 0; i < a; i++)
        if (d[i] > max)
            max = d[i];
    return (max);
}