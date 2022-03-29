#include<stdio.h>
void Explore();
void Explore()
{
    int s;
    printf("\n1.$""\n2.€""\n3.¥""\n4.﷼""\n5.£\n6.৳""\n7.₱" "\n8.₽""\n9.฿""\n10.₫");
    printf("\nENTER CURRENCY OF SEARCH\n");
    scanf("%d",&s);
  switch(s)
{
  case 1:
  printf("It is an official currency of USA\n.It is called DOLLAR\n.The Indian equivalent is ₹76.057\n.");
  break;
  case 2:
  printf("It is an official currency of European countries like France,Italy,Iceland and 32 more countries.\nIt is called EURO.\nThe Indian equivalent is ₹83.80.\n");
  break;
  case 3:
  printf("It is  used as an official currency of Japan.\nIt is called YEN.\nThe Indian equivalent is ₹0.64.\n");
  break;
  case 4:
  printf("It is used as an official currency by Iran.\nIt is called RIAL.\nThe Indian equivalent is ₹0.0018.\n");
  break;
  case 5:
  printf("It is used as an official currency by UK.\nIt is called POUND STERLING.\nThe Indian equivalent is ₹99.81.\n");
  break;
  case 6:
  printf("It is used as an official currency by Bangladesh.\nIt is called TAKKA.\nThe Indian equivalent is ₹0.88.\n");
  break;
  case 7:
  printf("It is used as an official currency by Philipines.\nIt is called PESO.\nThe Indian equivalent is ₹1.45.\n");
  break;
  case 8:
  printf("It is used as an official currency by Russia.\nIt is called RUBLE.\nThe Indian equivalent is ₹0.77.\n");
  break;
  case 9:
  printf("It is used as an official currency by Thailand.\nIt is called BAHT.\nThe Indian equivalent is ₹2.28.\n");
  break;
  case 10:
  printf("It is used as an official currency by Vietnem.\nIt is called VIETNEMESE DONG.\nThe Indian equivalent is ₹0.0033.\n");
  break;
}
}
