#include <vector>

#include "Converter.hpp"

std::string convertArabicToRoman(int arabic)
{
    std::vector<int>         romanNumeralValues = {500, 100,  50,  10,  5 ,  1 };
    std::vector<std::string> romanNumerals      = {"D", "C", "L", "X", "V", "I"};

    std::string roman = "";

    for (; arabic >= romanNumeralValues[0] - romanNumeralValues[1]; arabic -= romanNumeralValues[0])
    {
        for (; arabic < romanNumeralValues[0]; arabic += romanNumeralValues[1])
        {
            roman += romanNumerals[1];
        }

        roman += romanNumerals[0];
    }


    for (; arabic >= romanNumeralValues[1] - romanNumeralValues[3]; arabic -= romanNumeralValues[1])
    {
        for (; arabic < romanNumeralValues[1]; arabic += romanNumeralValues[3])
        {
            roman += romanNumerals[3];
        }

        roman += romanNumerals[1];
    }

    for (; arabic >= romanNumeralValues[2] - romanNumeralValues[3]; arabic -= romanNumeralValues[2])
    {
        for (; arabic < romanNumeralValues[2]; arabic += romanNumeralValues[3])
        {
            roman += romanNumerals[3];
        }

        roman += romanNumerals[2];
    }

    for (; arabic >= romanNumeralValues[3] - romanNumeralValues[5]; arabic -= romanNumeralValues[3])
    {
        for (; arabic < romanNumeralValues[3]; arabic += romanNumeralValues[5])
        {
            roman += romanNumerals[5];
        }

        roman += romanNumerals[3];
    }

    for (; arabic >= romanNumeralValues[4] - romanNumeralValues[5]; arabic -= romanNumeralValues[4])
    {
        for (; arabic < romanNumeralValues[4]; arabic += romanNumeralValues[5])
        {
            roman += romanNumerals[5];
        }

        roman += romanNumerals[4];
    }

    for (; arabic >= 1; arabic -= 1)
    {
        roman += "I";
    }

    return roman;
}
