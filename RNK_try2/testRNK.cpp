#include "testRNK.hpp"
#include "Converter.hpp"

int testRNK()
{
    if (convertArabicToRoman(0) != "")  return -1;
    if (convertArabicToRoman(1) != "I") return  1;

    return 0;
}
