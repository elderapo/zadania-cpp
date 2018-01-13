#include <iostream>
#include <sstream>
#include <string.h>

#pragma GCC diagnostic ignored "-Wwrite-strings"

const char *alfabet(char *alfa, int n)
{
    std::stringstream ss;
    int alfaLen = strlen(alfa);

    for (int i = 0; i < std::min(alfaLen, n); i++)
    {
        ss << alfa[i];
    }
    return ss.str().c_str();
}

int main()
{
    std::cout << alfabet("abcdef", 3) << std::endl;
    std::cout << alfabet("123456789", 9) << std::endl;
    std::cout << alfabet("123456789", 33) << std::endl;

    return 1;
}