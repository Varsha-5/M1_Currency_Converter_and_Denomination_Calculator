//currency conversion
#include<stdio.h>
#include<stdlib.h>
#include<Explore.h>
#include<Compare.h>
#include<Exchange.h>
#include<Denomination.h>
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
    
      
}
