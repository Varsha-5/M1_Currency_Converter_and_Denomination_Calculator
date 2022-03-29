#include<stdio.h>
void Exchange();
void Exchange()
{
  int num;
  int n;
  float total;
  char ch[20];
  printf("SELECT CURRENCY YOU WISH TO CONVERT TO RUPPEE\n\n");
  printf("1.Dollar   2.Euro  3. Yen 4.Riyal  5.pound  6.Tukka 7.Peso   8.Rubble  9.Baht 10.Dong 11.\n");
  //printf("\n---------------------------------------");
  //printf("\n'''''''''''''''''''''''''''''''");
  printf("Enter currency type \n");
  scanf("%d",&num);
  printf("Enter the amount you want to convert\n");
  scanf("%d",&n);
  switch(num)
    {
    case 1:
    total=n*(76.057);
    printf("\n  %d  %s  %f Indian rupees",n,ch,total);
    break;
    case 2:
    total=n*(83.30);
    printf("\n  %d  %s  %f Indian rupees",n,ch,total);
    break;
    case 3:
    total=n*(0.64);
    printf("\n  %d  %s  %f Indian rupees",n,ch,total);
    break;
    case 4:
    total=n*(0.0018);
    printf("\n  %d  %s  %f Indian rupees",n,ch,total);
    break;
    case 5:
    total=n*(99.81);
    printf("\n  %d  %s  %f Indian rupees",n,ch,total);
    break;
    case 6:
    total=n*(0.88);
    printf("\n  %d  %s  %f Indian rupees",n,ch,total);
    break;
    case 7:
    total=n*(1.45);
    printf("\n  %d  %s  %f Indian rupees",n,ch,total);
    break;
    case 8:
    total=n*(0.77);
    printf("\n  %d  %s  %f Indian rupees",n,ch,total);
    break;
    case 9:
    total=n*(2.28);
    printf("\n  %d  %s  %f Indian rupees",n,ch,total);
    break;
    case 10:
    total=n*(0.00);
    printf("\n  %d  %s  %f Indian rupees",n,ch,total);
    break;
    case 11:
    total=n*(0.0033);
    printf("\n  %d  %s  %f Indian rupees",n,ch,total);
    break;
    case 12:
    total=n*(83.80);
    printf("\n  %d  %s  %f Indian rupees",n,ch,total);
    break;
    case 13:
    total=n*(249.86);
    printf("\n  %d  %s  %f Indian rupees",n,ch,total);
    break;
    case 14:
    total=n*(5.20);
    printf("\n  %d  %s  %f Indian rupees",n,ch,total);
    break;
    }
}
