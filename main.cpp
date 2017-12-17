//testing module
#include "conversion.hpp"

int main()
{
    if (convertArabicToRoman(0) != "") return 1;
    if (convertArabicToRoman(1) != "I") return 2;
    if (convertArabicToRoman(2) != "II") return 3;
    if (convertArabicToRoman(3) != "III") return 4;
    if (convertArabicToRoman(4) != "IV") return 5;
    if (convertArabicToRoman(5) != "V") return 6;
    if (convertArabicToRoman(6) != "VI") return 7;
    if (convertArabicToRoman(7) != "VII") return 8;
    if (convertArabicToRoman(8) != "VIII") return 9;
    if (convertArabicToRoman(9) != "IX") return 10;
    if (convertArabicToRoman(10) != "X") return 11;
    if (convertArabicToRoman(11) != "XI") return 12;
    if (convertArabicToRoman(12) != "XII") return 13;
    if (convertArabicToRoman(13) != "XIII") return 14;
    if (convertArabicToRoman(14) != "XIV") return 15;
    if (convertArabicToRoman(15) != "XV") return 16;
    if (convertArabicToRoman(16) != "XVI") return 17;
    if (convertArabicToRoman(17) != "XVII") return 18;
    if (convertArabicToRoman(18) != "XVIII") return 19;
    if (convertArabicToRoman(19) != "XIX") return 20;
    if (convertArabicToRoman(20) != "XX") return 21;
    if (convertArabicToRoman(21) != "XXI") return 22;
    if (convertArabicToRoman(22) != "XXII") return 23;
    if (convertArabicToRoman(23) != "XXIII") return 24;
    if (convertArabicToRoman(24) != "XXIV") return 25;
    if (convertArabicToRoman(25) != "XXV") return 26;
    if (convertArabicToRoman(26) != "XXVI") return 27;
    if (convertArabicToRoman(27) != "XXVII") return 28;
    if (convertArabicToRoman(28) != "XXVIII") return 29;
    if (convertArabicToRoman(29) != "XXIX") return 30;
    if (convertArabicToRoman(30) != "XXX") return 31;
    if (convertArabicToRoman(31) != "XXXI") return 32;
    if (convertArabicToRoman(32) != "XXXII") return 33;
    if (convertArabicToRoman(33) != "XXXIII") return 34;
    if (convertArabicToRoman(34) != "XXXIV") return 35;
    if (convertArabicToRoman(35) != "XXXV") return 36;
    if (convertArabicToRoman(36) != "XXXVI") return 37;
    if (convertArabicToRoman(37) != "XXXVII") return 38;
    if (convertArabicToRoman(38) != "XXXVIII") return 39;
    if (convertArabicToRoman(39) != "XXXIX") return 40;
    if (convertArabicToRoman(40) != "XL") return 41;
    if (convertArabicToRoman(41) != "XLI") return 42;
    if (convertArabicToRoman(42) != "XLII") return 43;
    if (convertArabicToRoman(43) != "XLIII") return 44;
    if (convertArabicToRoman(44) != "XLIV") return 45;
    if (convertArabicToRoman(45) != "XLV") return 46;
    if (convertArabicToRoman(46) != "XLVI") return 47;
    if (convertArabicToRoman(47) != "XLVII") return 48;
    if (convertArabicToRoman(48) != "XLVIII") return 49;
    if (convertArabicToRoman(49) != "XLIX") return 50;
    if (convertArabicToRoman(50) != "L") return 51;
    if (convertArabicToRoman(51) != "LI") return 52;
    if (convertArabicToRoman(52) != "LII") return 53;
    if (convertArabicToRoman(53) != "LIII") return 54;
    if (convertArabicToRoman(54) != "LIV") return 55;
    if (convertArabicToRoman(55) != "LV") return 56;
    if (convertArabicToRoman(56) != "LVI") return 57;
    if (convertArabicToRoman(57) != "LVII") return 58;
    if (convertArabicToRoman(58) != "LVIII") return 59;
    if (convertArabicToRoman(59) != "LIX") return 60;
    if (convertArabicToRoman(60) != "LX") return 61;
    if (convertArabicToRoman(61) != "LXI") return 62;
    if (convertArabicToRoman(62) != "LXII") return 63;
    if (convertArabicToRoman(63) != "LXIII") return 64;
    if (convertArabicToRoman(64) != "LXIV") return 65;
    if (convertArabicToRoman(65) != "LXV") return 66;
    if (convertArabicToRoman(66) != "LXVI") return 67;
    if (convertArabicToRoman(67) != "LXVII") return 68;
    if (convertArabicToRoman(68) != "LXVIII") return 69;
    if (convertArabicToRoman(69) != "LXIX") return 70;
    if (convertArabicToRoman(70) != "LXX") return 71;
    if (convertArabicToRoman(4999) != "MMMMCMXCIX") return 90;
    if (convertArabicToRoman(20000) != "MMMMMMMMMMMMMMMMMMMM") return 91;

//  if (convertArabicToRoman(4999) != "MSCMXCIX") return 90;
//  if (convertArabicToRoman(20000) != "SSSS") return 91;

    return 0;
}
