	#include <stdio.h>
	#include <stdlib.h>
	#include "Explore.h"					/* Add include file*/
  #include "Compare.h"					/* Add include file*/
  #include "Exchange.h"					/* Add include file*/
  #include "Denomination.h"					/* Add include file*/
	#include "test_Explore.h"				/* Add include file*/
  #include "test_Compare.h"				/* Add include file*/
  #include "test_Exchange.h"				/* Add include file*/
  #include "test_Denomination.h"				/* Add include file*/
	int main()
	{
    	int num,n,exit,choice;
  int symbol;
  float total;
  char ch[20];
  printf("*************WELCOME TO MINIPROJECT_C************** \n\n");
  printf("FUNCTIONALITES AVAILABLE:\n");
  printf(
    "\n1.EXPLORE CURRENCY" 
    "\n2.COMPARE CURRENCIES"
    "\n3.FOREIGN EXCHANGE"
    "\n4.DENOMINATION CALCULATOR");
  printf("\n\nENTER YOUR CHOICE\n");
  scanf("%d",&choice);
  switch(choice)
  {
  case 1:
  Explore();
  break;
  case 2:
  Compare();
  break;
  case 3:
  Exchange();
  break;
  case 4:
  Denomination();
  break;
 }
    
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
