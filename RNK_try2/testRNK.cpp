#include "testRNK.hpp"
#include "Converter.hpp"

int testRNK()
{
    if (convertArabicToRoman( 0) != ""    ) return -1;
    if (convertArabicToRoman( 1) != "I"   ) return  1;
    if (convertArabicToRoman( 2) != "II"  ) return  2;
    if (convertArabicToRoman( 3) != "III" ) return  3;
    if (convertArabicToRoman( 4) != "IV"  ) return  4;
    if (convertArabicToRoman( 5) != "V"   ) return  5;
    if (convertArabicToRoman( 6) != "VI"  ) return  6;
    if (convertArabicToRoman( 7) != "VII" ) return  7;
    if (convertArabicToRoman( 8) != "VIII") return  8;
    if (convertArabicToRoman( 9) != "IX"  ) return  9;
    if (convertArabicToRoman(10) != "X"   ) return 10;

    return 0;
}
