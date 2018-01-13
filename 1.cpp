#include <iostream>

#define PREDEFINED_LENGTH 1000

double srednia(double *arr)
{
    /*
        Możliwe jest, że w przypadku jak arr będzie zawierać dużo dużych liczb to
        sum nie da rady ich "skumulować" - zrobi się overflow i wynik będzie niepoprawny.
    */

    double sum = 0;

    for (int i = 0; i < PREDEFINED_LENGTH; i++)
    {
        sum += arr[i];
    }

    return sum / PREDEFINED_LENGTH;
}

double srednia(int *arr)
{
    double doubleArray[PREDEFINED_LENGTH];
    std::copy(arr, arr + PREDEFINED_LENGTH, doubleArray);
    return srednia(doubleArray);
}

int main()
{
    double doubleArr[PREDEFINED_LENGTH];
    int intArr[PREDEFINED_LENGTH];

    for (int i = 0; i < PREDEFINED_LENGTH; i++)
    {
        doubleArr[i] = 12313;
        intArr[i] = 12313;
    }

    std::cout << srednia(doubleArr) << std::endl;
    std::cout << srednia(intArr) << std::endl;
    return 1;
}