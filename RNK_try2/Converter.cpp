#include "Converter.hpp"

std::string convertArabicToRoman(int arabic)
{
    std::string roman = "";
    if (arabic == 4)
    {
        roman += "IV";
        arabic -= 4;
    }

    for (int i = 0; i < arabic; i++)
    {
        roman += "I";
    }
    return roman;
}
