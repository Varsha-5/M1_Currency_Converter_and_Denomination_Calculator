	#include "unity.h"
	#include "Denomination.h"

	void setUp()
	{	}
	void tearDown()
	{	}
	
	void test_Denomination(void)
	{
  		TEST_ASSERT_EQUAL("\n100 notes is: 2 \n50 notes is: 0 \n20 notes is: 1 \n10 notes is: 0 \n5 notes is: 0 \n2 notes is: 1 \n1 notes is: 0" , Denomination(1, 222));
      TEST_ASSERT_EQUAL("\n50 notes is: 0 \n20 notes is: 1 \n10 notes is: 0 \n5 notes is: 0" , Denomination(5, 22));
	}

	int test_main(void)
	{
	  	UNITY_BEGIN();
  	
	  	RUN_TEST(test_Denomination);

  		return UNITY_END();
	}
