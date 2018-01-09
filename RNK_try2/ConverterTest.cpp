#include "testRNK.hpp"
#include "Converter.hpp"

int testRNK()
{
    if (convertArabicToRoman( 0) != ""      ) return -1;
    if (convertArabicToRoman( 1) != "I"     ) return  1;
    if (convertArabicToRoman( 2) != "II"    ) return  2;
    if (convertArabicToRoman( 3) != "III"   ) return  3;
    if (convertArabicToRoman( 4) != "IV"    ) return  4;
    if (convertArabicToRoman( 5) != "V"     ) return  5;
    if (convertArabicToRoman( 6) != "VI"    ) return  6;
    if (convertArabicToRoman( 7) != "VII"   ) return  7;
    if (convertArabicToRoman( 8) != "VIII"  ) return  8;
    if (convertArabicToRoman( 9) != "IX"    ) return  9;
    if (convertArabicToRoman(10) != "X"     ) return 10;
    if (convertArabicToRoman(11) != "XI"    ) return 11;
    if (convertArabicToRoman(12) != "XII"   ) return 12;
    if (convertArabicToRoman(13) != "XIII"  ) return 13;
    if (convertArabicToRoman(14) != "XIV"   ) return 14;
    if (convertArabicToRoman(15) != "XV"    ) return 15;
    if (convertArabicToRoman(16) != "XVI"   ) return 16;
    if (convertArabicToRoman(17) != "XVII"  ) return 17;
    if (convertArabicToRoman(18) != "XVIII" ) return 18;
    if (convertArabicToRoman(19) != "XIX"   ) return 19;
    if (convertArabicToRoman(20) != "XX"    ) return 20;
    if (convertArabicToRoman(21) != "XXI"   ) return 21;
    if (convertArabicToRoman(22) != "XXII"  ) return 22;
    if (convertArabicToRoman(23) != "XXIII" ) return 23;
    if (convertArabicToRoman(24) != "XXIV"  ) return 24;
    if (convertArabicToRoman(25) != "XXV"   ) return 25;
    if (convertArabicToRoman(26) != "XXVI"  ) return 26;
    if (convertArabicToRoman(27) != "XXVII" ) return 27;
    if (convertArabicToRoman(28) != "XXVIII") return 28;
    if (convertArabicToRoman(29) != "XXIX"  ) return 29;
    if (convertArabicToRoman(30) != "XXX"   ) return 30;
    if (convertArabicToRoman(39) != "XXXIX" ) return 39;
    if (convertArabicToRoman(40) != "XL"    ) return 40;
    if (convertArabicToRoman(41) != "XLI"   ) return 41;
    if (convertArabicToRoman(50) != "L"     ) return 50;
    if (convertArabicToRoman(77) != "LXXVII") return 77;
    if (convertArabicToRoman(90) != "XC"    ) return 90;

    return 0;
}
