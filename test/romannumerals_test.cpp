#include <gtest/gtest.h>
#include "romannumerals.h"
#include "romannumeralassert.h"

TEST(ArabicToRomanNumeralsConverterTestCase, PreparationComplete)
{
    GTEST_SUCCEED();
}

TEST(ArabicToRomanNumeralsConverterTestCase, 1_isConvertedTo_I)
{
  ASSERT_EQ("I", convertArabicNumberToRomanNumeral(1));
}

TEST(ArabicToRomanNumeralsConverterTestCase, 2_isConvertedTo_II)
{
  ASSERT_EQ("II", convertArabicNumberToRomanNumeral(2));
}

TEST(ArabicToRomanNumeralsConverterTestCase, 3_isConvertedTo_III)
{
  ASSERT_EQ("III", convertArabicNumberToRomanNumeral(3));
}

TEST(ArabicToRomanNumeralsConverterTestCase, conversionOfArabicNumbersToRomanNumerals_Works)
{
  assertThat(1).isConvertedToRomanNumeral("I");
  assertThat(2).isConvertedToRomanNumeral("II");
  assertThat(3).isConvertedToRomanNumeral("III");
  assertThat(4).isConvertedToRomanNumeral("IV");
  assertThat(5).isConvertedToRomanNumeral("V");
  assertThat(6).isConvertedToRomanNumeral("VI");
  assertThat(9).isConvertedToRomanNumeral("IX");
  assertThat(10).isConvertedToRomanNumeral("X");
  assertThat(20).isConvertedToRomanNumeral("XX");
  assertThat(30).isConvertedToRomanNumeral("XXX");
  assertThat(33).isConvertedToRomanNumeral("XXXIII");
  assertThat(37).isConvertedToRomanNumeral("XXXVII");
  assertThat(50).isConvertedToRomanNumeral("L");
  assertThat(99).isConvertedToRomanNumeral("XCIX");
  assertThat(100).isConvertedToRomanNumeral("C");
  assertThat(200).isConvertedToRomanNumeral("CC");
  assertThat(300).isConvertedToRomanNumeral("CCC");
  assertThat(499).isConvertedToRomanNumeral("CDXCIX");
  assertThat(500).isConvertedToRomanNumeral("D");
  assertThat(1000).isConvertedToRomanNumeral("M");
  assertThat(2000).isConvertedToRomanNumeral("MM");
  assertThat(2017).isConvertedToRomanNumeral("MMXVII");
  assertThat(3000).isConvertedToRomanNumeral("MMM");
  assertThat(3333).isConvertedToRomanNumeral("MMMCCCXXXIII");
  assertThat(3999).isConvertedToRomanNumeral("MMMCMXCIX");
}

int main(int argc, char** argv){

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
