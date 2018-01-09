#include "Converter.hpp"
#include <iostream>

std::string convertArabicToRoman(int arabic)
{
    std::string roman = "";

    for (; arabic >= 500 - 100; arabic -= 500)
    {
        for (; arabic < 500; arabic += 100)
        {
            roman += "C";
        }

        roman += "D";
    }


    for (; arabic >= 100 - 10; arabic -= 100)
    {
        for (; arabic < 100; arabic += 10)
        {
            roman += "X";
        }

        roman += "C";
    }

    for (; arabic >= 50 - 10; arabic -= 50)
    {
        for (; arabic < 50; arabic += 10)
        {
            roman += "X";
        }

        roman += "L";
    }

    for (; arabic >= 10 - 1; arabic -= 10)
    {
        for (; arabic < 10; arabic += 1)
        {
            roman += "I";
        }

        roman += "X";
    }

    for (; arabic >= 5 - 1; arabic -= 5)
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
