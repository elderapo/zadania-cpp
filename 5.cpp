#include <iostream>

#define PREDEFINED_LENGTH 1000

double ilosc(int *arr, int wartosc)
{
    int count = 0;

    for (int i = 0; i < PREDEFINED_LENGTH; i++)
    {
        if (arr[i] == wartosc)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int arr[PREDEFINED_LENGTH];

    for (int i = 0; i < PREDEFINED_LENGTH; i++)
    {
        arr[i] = 11;
    }

    arr[69] = 7;
    arr[420] = 7;
    arr[666] = 7;
    arr[777] = 7;

    std::cout << ilosc(arr, 11) << std::endl;
    std::cout << ilosc(arr, 7) << std::endl;
    std::cout << ilosc(arr, 3) << std::endl;

    return 1;
}