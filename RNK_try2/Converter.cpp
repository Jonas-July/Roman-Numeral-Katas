#include "Converter.hpp"

std::string convertArabicToRoman(int arabic)
{
    std::string roman = "";

    for (; arabic >= 40; arabic -= 40)
    {
        roman += "XL";
    }

    for (; arabic >= 10; arabic -= 10)
    {
        roman += "X";
    }

    for (; arabic == 9; arabic -= 9)
    {
        roman += "IX";
    }

    for (; arabic >= 5; arabic -= 5)
    {
        roman += "V";
    }

    for (; arabic == 4; arabic -= 4)
    {
        roman += "IV";
    }

    for (; arabic >= 1; arabic -= 1)
    {
        roman += "I";
    }

    return roman;
}
