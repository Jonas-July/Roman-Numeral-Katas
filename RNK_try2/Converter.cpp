#include <vector>
#include <iostream>

#include "Converter.hpp"

std::string convertArabicToRoman(int arabic)
{
    std::vector<int>         romanNumeralValues = {1000, 500, 100,  50,  10,  5 ,  1 };
    std::vector<std::string> romanNumerals      = { "M", "D", "C", "L", "X", "V", "I"};

    std::string roman = "";

    for (uint16_t i = 0; i < romanNumerals.size(); i++)
    {
        int nextReductionNumeralIndex = i + 1 + (i + romanNumerals.size()) % 2;

        for (; arabic >= romanNumeralValues[i] - romanNumeralValues[nextReductionNumeralIndex]; arabic -= romanNumeralValues[i])
        {
            for (; arabic < romanNumeralValues[i]; arabic += romanNumeralValues[nextReductionNumeralIndex])
            {
                roman += romanNumerals[nextReductionNumeralIndex];
            }

            roman += romanNumerals[i];
        }
    }

    return roman;
}
