#include "Converter.hpp"

std::string convertArabicToRoman(int arabic)
{
    std::string roman = "";
    for (int i = 0; i < arabic; i++)
    {
        roman += "I";
    }
    return roman;
}
