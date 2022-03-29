#include "unity.h"
/* Modify these two lines according to the project */
#include<Explore.h>
#include<Compare.h>
#include<Exchange.h>
#include<Denomination.h>
#define PROJECT_NAME "Currency_Converter_Denomination_Calculator"

/* Prototypes for all the test functions */
void test_Explore(void);
void test_Compare(void);
void test_Exchange(void);
void test_Denomination(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_Explore);
  RUN_TEST(test_Compare);
  RUN_TEST(test_Exchange);
  RUN_TEST(test_Denomination);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_Explore(void) {
  TEST_ASSERT_EQUAL("It is an official currency of USA\n.It is called DOLLAR\n.The Indian equivalent is ₹76.057\n.", Explore(1));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL("It is used as an official currency by Iran.\nIt is called RIAL.\nThe Indian equivalent is ₹0.0018.\n.", Explore(4));
}

void test_Compare(void) {
  TEST_ASSERT_EQUAL("DOLLAR is the national currency of USA *** EURO is the national currency of France,Italy,Iceland and 32 more countries .\n 1$=1.10\n", Compare(1));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL("YEN is the national currency of JAPAN *** RIAL is the national currency of IRAN.\n 1¥=352.18﷼\n", Compare(2));
}

void test_Exchange(void) {
  TEST_ASSERT_EQUAL(380.285004, Exchange(1,5));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(416.500000, Exchange(2, 5));
}

void test_Denomination(void) {
  TEST_ASSERT_EQUAL("\n100 notes is: 2 \n50 notes is: 0 \n20 notes is: 1 \n10 notes is: 0 \n5 notes is: 0 \n2 notes is: 1 \n1 notes is: 0" , Denomination(1, 222));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL("\n50 notes is: 0 \n20 notes is: 1 \n10 notes is: 0 \n5 notes is: 0" , Denomination(5, 22));
}
