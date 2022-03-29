	#include "unity.h"
	#include "Exchange.h"

	void setUp()
	{	}
	void tearDown()
	{	}
	
	void test_Exchange(void)
	{
  		TEST_ASSERT_EQUAL(380.285004, Exchange(1,5));
      TEST_ASSERT_EQUAL(416.500000, Exchange(2, 5));
	}

	int test_main(void)
	{
	  	UNITY_BEGIN();
  	
	  	RUN_TEST(test_Exchange);

  		return UNITY_END();
	}
