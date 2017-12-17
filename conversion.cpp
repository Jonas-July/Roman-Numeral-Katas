#include "conversion.hpp"

std::string multiplyString(int multiplier, std::string str)
{
    std::string mulstring;
    for (int i = 0; i < multiplier; i++)
    {
         mulstring += str;
    }
    return mulstring;
}

std::string convertArabicToRoman(int arabic)
{
    int amountOfNumerals = 7;
    int romanValues[amountOfNumerals] = {1000, 500, 100, 50, 10, 5, 1};
    std::string romanNumerals[amountOfNumerals] = {"M", "D", "C", "L", "X", "V", "I"};

    std::string roman = "";
    for (int i = 0; i < amountOfNumerals; i++)
    {
        roman += multiplyString(arabic / romanValues[i], romanNumerals[i]);
        arabic -= (arabic / romanValues[i]) * romanValues[i];

        for (int k = 1 - amountOfNumerals % 2; k < amountOfNumerals; k+=2)
        {
            if (i < k)
            {
                if ((arabic + romanValues[k]) / romanValues[i] == 1)
                {
                    roman += romanNumerals[k];
                    roman += romanNumerals[i];
                    arabic -= romanValues[i] - romanValues[k];
                }
            }
        }
    }

    return roman;
}
