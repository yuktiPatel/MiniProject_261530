#include "unity.h"
#include "complement.h"
//#include "test_main.c"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_calculateDigits(void)
{
  TEST_ASSERT_EQUAL(2, calculateDigits(10));
  TEST_ASSERT_EQUAL(8, calculateDigits(10678324));
}

void test_calculateHexDigits(void)
{
  TEST_ASSERT_EQUAL(3, calculateHexDigits(0xabc));
  TEST_ASSERT_EQUAL(6, calculateHexDigits(0x183d24));
}

void test_r1Complement(void)
{
  TEST_ASSERT_EQUAL(810718, r1Complement(189281,10));
  TEST_ASSERT_EQUAL(61520, r1Complement(716257,8));
  TEST_ASSERT_EQUAL(10110001, r1Complement(101001110,2));
  TEST_ASSERT_EQUAL(0x8e5428, r1Complement(0x71abd7,16));	
}

void test_rComplement(void)
{
  TEST_ASSERT_EQUAL(810719, rComplement(189281,10));
  TEST_ASSERT_EQUAL(61521, rComplement(716257,8));
  TEST_ASSERT_EQUAL(10110010, rComplement(101001110,2));
  TEST_ASSERT_EQUAL(0x8e5429, rComplement(0x71abd7,16));	
}

void test_addOneToBinary(void)
{
  TEST_ASSERT_EQUAL(11, addOneToBinary(10));
  TEST_ASSERT_EQUAL(101011, addOneToBinary(101010));
}

void test_addOneToOctal(void)
{
  TEST_ASSERT_EQUAL(110, addOneToOctal(107));
  TEST_ASSERT_EQUAL(1770, addOneToOctal(1767));
}

int test_main(void){
  UNITY_BEGIN();
  RUN_TEST(test_r1Complement);
  RUN_TEST(test_rComplement); 
  RUN_TEST(test_calculateDigits);
  RUN_TEST(test_calculateHexDigits);
  RUN_TEST(test_addOneToBinary);
  RUN_TEST(test_addOneToOctal);  
  return UNITY_END();  
}
