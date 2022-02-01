#include<stdio.h>

 int main()
{
  float bp,da,hra,grpay;
  printf("\nEnter the basic salary of ramesh:");
  scanf("%f",&bp);
  da=0.4* bp;
  hra=0.2* bp;
  grpay=bp+da+hra;
  printf("basic salary of ramesh=%f\n",bp);
  printf("dearness allowances=%f\n",da);
  printf(" house rent allowence=%f\n",hra);
  printf("grosspay of ramesh is=%f\n",grpay);
return 0;
}
