#include <iostream>
using namespace std;

double *dynamicArray(int N, double M)
{
    double *darr = new double[N];
    for (int i = 0; i < 10; i++)
        darr[i] = M;
    return (darr);
}

void changeValue(double *a)
{
    *a = 42;
}

void printArray(double *d, int a)
{
    for (int i = 0; i < a; i++)
        cout << d[i] << " ";
    cout << endl;
}

double arrayMax(double *d, int a)
{
    double max = *d;
    for (int i = 0; i < a; i++)
        if (d[i] > max)
            max = d[i];
    return (max);
}