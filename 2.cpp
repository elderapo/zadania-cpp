#include <iostream>

#pragma GCC diagnostic ignored "-Wwrite-strings"

int zawiera_spacje(char *s)
{
    for (; *s; ++s)
    {
        if ((char)*s == ' ')
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    char *s1 = "stringbezspacji";
    char *s2 = "string ze spacjo";

    std::cout << zawiera_spacje(s1) << std::endl;
    std::cout << zawiera_spacje(s2) << std::endl;

    return 1;
}