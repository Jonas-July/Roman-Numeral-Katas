#include "Converter.hpp"

std::string convertArabicToRoman(int arabic)
{
    std::string roman = "";

    if (arabic >= 10)
    {
        roman += "X";
        arabic -= 10;
    }

    if (arabic == 9)
    {
        roman += "IX";
        arabic -= 9;
    }

    if (arabic >= 5)
    {
        roman += "V";
        arabic -= 5;
    }

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
