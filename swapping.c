#include<stdio.h>
int main()
{
  int a,b;
  scanf("%d%d",&a,&b);
printf("Numbers before swapping are %d,%d\n",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
printf("Numbers after swapping are %d,%d",a,b);
 return 0;
}
