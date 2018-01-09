#include "Converter.hpp"

std::string convertArabicToRoman(int arabic)
{
    std::string roman = "";

    for (; arabic >= 90; arabic -= 90)
    {
        roman += "XC";
    }

    for (; arabic >= 40; arabic -= 50)
    {
        for (; arabic < 50; arabic += 10)
        {
            roman += "X";
        }

        roman += "L";
    }


    for (; arabic >= 9; arabic -= 10)
    {
        for (; arabic < 10; arabic += 1)
        {
            roman += "I";
        }

        roman += "X";
    }

    for (; arabic >= 4; arabic -= 5)
    {
        for (; arabic < 5; arabic += 1)
        {
            roman += "I";
        }

        roman += "V";
    }

    for (; arabic >= 1; arabic -= 1)
    {
        roman += "I";
    }

    return roman;
}
