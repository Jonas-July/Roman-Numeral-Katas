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
    if (convertArabicToRoman(11) != "XI"  ) return 11;
    if (convertArabicToRoman(12) != "XII" ) return 12;
    if (convertArabicToRoman(13) != "XIII") return 13;
    if (convertArabicToRoman(14) != "XIV" ) return 14;
    if (convertArabicToRoman(15) != "XV"  ) return 15;

    return 0;
}
