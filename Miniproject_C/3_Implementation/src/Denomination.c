#include<stdio.h>
void A(int *a,int *amount);
void B(int *b,int *amount);
void C(int *c,int *amount);
void D(int *d,int *amount);
void E(int *e,int *amount);
void F(int *f,int *amount);
void G(int *g,int *amount);
void H(int *h,int *amount);
void J(int *j,int *amount);
void K(int *k,int *amount);
 void Denomination()
    {
        int amount,country;
        int a[20];
        int b[20];
        int c[20];
        int d[20];
        int e[20];
        int f[20];
        int g[20];
        int h[20];
        int j[20];
        int k[20];
        /*printf("ENTER AMOUNT:\n");
        scanf("%d",&amount);*/
        printf("ENTER COUNTRY\n");
       printf("1.Dollar\n2.Euro\n3.Yen\n4.Riyal\n5.pound\n6.Tukka\n7.Peso\n8.Rubble\n9.Baht\n10.Dong\n");
        scanf("%d",&country);
        switch(country)
        {
        case 1:;
        int a[7]={100,50,20,10,5,2,1};
        printf("Enter the amount:");
        scanf("%d",&amount);
        printf("DENOMINATION IN USA:\n");
        A(a,&amount);
        break;
        case 2:;
        int b[7]={500,200,100,50,20,10,5};
        printf("Enter the amount:");
        scanf("%d",&amount);
        printf("DENOMINATION IN EURO:\n");
        B(b,&amount);
        break;
        case 3:;
        int c[6]={500,100,50,10,5,1};
        printf("Enter the amount:");
        scanf("%d",&amount);
        printf("DENOMINATION IN JAPAN:\n");
        C(c,&amount);
        break;
        case 4:;
        int d[8]={500,200,100,50,20,10,5,1};
        printf("Enter the amount:");
        scanf("%d",&amount);
        printf("DENOMINATION IN RIYAL:\n");
        D(d,&amount);
        break;
        case 5:;
        int e[4]={50,20,10,5};
        printf("Enter the amount:");
        scanf("%d",&amount);
        printf("DENOMINATION IN Uk:\n");
        E(e,&amount);
        break;
        case 6:;
        int f[9]={1000,500,200,100,50,20,10,5,2};
        printf("Enter the amount:");
        scanf("%d",&amount);
        printf("DENOMINATION IN TAKKA:\n");
        F(f,&amount);
        break;
        case 7:;
        int g[6]={1000,500,200,100,50,20};
        printf("Enter the amount:");
        scanf("%d",&amount);
        printf("DENOMINATION IN PESO:\n");
        G(g,&amount);
        break;
        case 8:;
        int h[7]={5000,1000,500,100,50,10,5};
        printf("Enter the amount:");
        scanf("%d",&amount);
        printf("DENOMINATION IN RUBLE:\n");
        H(h,&amount);
        break;
        case 9:;
        int j[9]={1000,500,100,50,20,10,5,2,1};
        printf("Enter the amount:");
        scanf("%d",&amount);
        printf("DENOMINATION IN BAHT:\n");
        J(j,&amount);
        break;
        case 10:;
        int k[12]={500000,200000,100000,50000,20000,10000,5000,2000,1000,500,200,100};
        printf("Enter the amount:");
        scanf("%d",&amount);
        printf("DENOMINATION IN DONG:\n");
        K(k,&amount);
        break;
    }
    }
void A(int *a,int *amount)
{
    int temp,i;
    temp=*amount;
    for(i=0;i<7;i++)
    {
     
     printf("\n%d notes is:%d",*(a+i),temp/(*(a+i)));
     temp=temp%a[i];
     	
    } 
}
void B(int *b,int *amount)
{
    int temp,i;
    temp=*amount;
    for(i=0;i<7;i++)
    {
     
     printf("\n%d notes is:%d",*(b+i),temp/(*(b+i)));
     temp=temp%b[i];
     	
    } 
}
void C(int *c,int *amount)
{
    int temp,i;
    temp=*amount;
    for(i=0;i<6;i++)
    {
     
     printf("\n%d notes is:%d",*(c+i),temp/(*(c+i)));
     temp=temp%c[i];
     	
    } 
}
void D(int *d,int *amount)
{
    int temp,i;
    temp=*amount;
    for(i=0;i<8;i++)
    {
     
     printf("\n%d notes is:%d",*(d+i),temp/(*(d+i)));
     temp=temp%d[i];
     	
    } 
}
void E(int *e,int *amount)
{
    int temp,i;
    temp=*amount;
    for(i=0;i<4;i++)
    {
     
     printf("\n%d notes is:%d",*(e+i),temp/(*(e+i)));
     temp=temp%e[i];
     	
    } 
}
void F(int *f,int *amount)
{
    int temp,i;
    temp=*amount;
    for(i=0;i<9;i++)
    {
     
     printf("\n%d notes is:%d",*(f+i),temp/(*(f+i)));
     temp=temp%f[i];
     	
    } 
}
void G(int *g,int *amount)
{
    int temp,i;
    temp=*amount;
    for(i=0;i<6;i++)
    {
     
     printf("\n%d notes is:%d",*(g+i),temp/(*(g+i)));
     temp=temp%g[i];
     	
    } 
}
void H(int *h,int *amount)
{
    int temp,i;
    temp=*amount;
    for(i=0;i<7;i++)
    {
     
     printf("\n%d notes is:%d",*(h+i),temp/(*(h+i)));
     temp=temp%h[i];
     	
    } 
}
void J(int *j,int *amount)
{
    int temp,i;
    temp=*amount;
    for(i=0;i<9;i++)
    {
     
     printf("\n%d notes is:%d",*(j+i),temp/(*(j+i)));
     temp=temp%j[i];
     	
    } 
}
void K(int *k,int *amount)
{
    int temp,i;
    temp=*amount;
    for(i=0;i<12;i++)
    {
     
     printf("\n%d notes is:%d",*(k+i),temp/(*(k+i)));
     temp=temp%k[i];
     	
    } 
}
    
