	#include "unity.h"
	#include "Explore.h"

	void setUp()
	{	}
	void tearDown()
	{	}
	
	void test_Explore(void)
	{
  		TEST_ASSERT_EQUAL("It is an official currency of USA\n.It is called DOLLAR\n.The Indian equivalent is ₹76.057\n.", Explore(1));
      TEST_ASSERT_EQUAL("It is used as an official currency by Iran.\nIt is called RIAL.\nThe Indian equivalent is ₹0.0018.\n.", Explore(4));
	}

	int test_main(void)
	{
	  	UNITY_BEGIN();
  	
	  	RUN_TEST(test_Explore);

  		return UNITY_END();
	}
