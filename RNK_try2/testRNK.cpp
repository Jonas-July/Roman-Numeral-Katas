#include "testRNK.hpp"
#include "Converter.hpp"

int testRNK()
{
    if (convertArabicToRoman(0) != ""   ) return -1;
    if (convertArabicToRoman(1) != "I"  ) return  1;
    if (convertArabicToRoman(2) != "II" ) return  2;
    if (convertArabicToRoman(3) != "III") return  3;
    if (convertArabicToRoman(4) != "IV" ) return  4;
    if (convertArabicToRoman(5) != "V"  ) return  5;

    return 0;
}
