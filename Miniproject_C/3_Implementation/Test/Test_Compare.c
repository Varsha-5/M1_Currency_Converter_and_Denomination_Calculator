	#include "unity.h"
	#include "Compare.h"

	void setUp()
	{	}
	void tearDown()
	{	}
	
	void test_Compare(void)
	{
  	TEST_ASSERT_EQUAL("DOLLAR is the national currency of USA *** EURO is the national currency of France,Italy,Iceland and 32 more countries .\n 1$=1.10\n", Compare(1));
    TEST_ASSERT_EQUAL("YEN is the national currency of JAPAN *** RIAL is the national currency of IRAN.\n 1¥=352.18﷼\n", Compare(2));	
	}

	int test_main(void)
	{
	  	UNITY_BEGIN();
  	
	  	RUN_TEST(test_Compare);

  		return UNITY_END();
	}
