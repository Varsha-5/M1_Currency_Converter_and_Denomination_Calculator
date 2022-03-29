#include<stdio.h>
void Compare();
void Compare()
{
    int comp;
    printf("ENTER CURRENCY PAIRS TO COMPARE\n");
    printf("\n1.Dollar Vs Euro\n2.Yen Vs Rial \n3.Pound Vs Takka\n4.Peso Vs Ruble\n5.Baht Vs Dong\n");
    scanf("\n%d",&comp);
    switch(comp)
    {
      case 1:
      printf("DOLLAR is the national currency of USA *** EURO is the national currency of France,Italy,Iceland and 32 more countries .\n 1$=1.10\n");
      break;
      case 2:
      printf("YEN is the national currency of JAPAN *** RIAL is the national currency of IRAN.\n 1¥=352.18﷼\n");
      break; 
      case 3:
      printf("POUND is the national currency of UK ***  TAKKA is the national currency of BANGLADESH.\n 1£=113.24৳\n");
      break;
      case 4:
      printf("PESO is the national currency of PHILIPPINES *** RUBLE is the national currency OF RUSSIA.\n1₱=1.93₽\n");
      break;
      case 5:
      printf("BAHT is the national currency of THAILAND *** DONG is the national currency of VIETNAM.\n 1฿=682.63₫\n");
      break;
    }
  }
