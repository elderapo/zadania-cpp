#include <iostream>

int func(double x, double *a, int aLength)
{
    for (int i = 0; i < aLength; i++)
    {
        double val = a[i];
        // ???
    }

    return 0;
}

int main()
{

    double x = 12;
    double a[10] = {1, 22, 0, 4, 3, 6, 33, 12, -3, 2};

    std::cout << func(x, a, 10);

    return 1;
}