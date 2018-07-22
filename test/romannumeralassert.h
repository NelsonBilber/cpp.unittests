#ifndef ROMANNUMERALASSERT_H
#define ROMANNUMERALASSERT_H

#include <gtest/gtest.h>

class RomanNumeralAssert {
public:
  RomanNumeralAssert() = delete;

  explicit RomanNumeralAssert(const unsigned int arabicNumber) : arabicNumberToConvert(arabicNumber)
  { }

  void isConvertedToRomanNumeral(const std::string& expectedRomanNumeral) const
  {
    ASSERT_EQ(expectedRomanNumeral, convertArabicNumberToRomanNumeral(arabicNumberToConvert));
  }

private:
  const unsigned int arabicNumberToConvert;
};

RomanNumeralAssert assertThat(const unsigned int arabicNumber) {
  RomanNumeralAssert assert { arabicNumber };
  return assert;
}

#endif // ROMANNUMERALASSERT_H
