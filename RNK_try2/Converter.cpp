#include <vector>
#include <iostream>

#include "Converter.hpp"

std::string convertArabicToRoman(int arabic)
{
    std::vector<int>         romanNumeralValues = {500, 100,  50,  10,  5 ,  1 };
    std::vector<std::string> romanNumerals      = {"D", "C", "L", "X", "V", "I"};

    std::string roman = "";

    for (uint16_t i = 0; i < romanNumerals.size(); i++)
    {
        for (; arabic >= romanNumeralValues[i] - romanNumeralValues[i + i % 2 + 1]; arabic -= romanNumeralValues[i])
        {
            for (; arabic < romanNumeralValues[i]; arabic += romanNumeralValues[i + i % 2 + 1])
            {
                roman += romanNumerals[i + i % 2 + 1];
            }

            roman += romanNumerals[i];
        }
    }

    return roman;
}
