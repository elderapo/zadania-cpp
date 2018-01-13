#include <iostream>
#include <sstream>
#include <string.h>

#pragma GCC diagnostic ignored "-Wwrite-strings"

const char *letter_spacing(char *s)
{
    std::stringstream ss;
    int originalStringLength = strlen(s);

    for (int i = 0; i < originalStringLength; i++)
    {
        char c = s[i];
        ss << c;

        if (i < originalStringLength - 1) // end of string
        {
            ss << ' ';
        }
    }
    return ss.str().c_str();
}

int main()
{
    char *s1 = "stringbezspacji";
    char *s2 = "string ze spacjo";

    std::cout << letter_spacing(s1) << "|" << std::endl;
    std::cout << letter_spacing(s2) << "|" << std::endl;
    std::cout << letter_spacing("MITP") << "|" << std::endl;

    return 1;
}