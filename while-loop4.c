#include<stdio.h>
int  main()
{
 int n,sum=0;
 printf("enter a number:");
 scanf("%d",&n);
 while(n!=0)
 {
n=n/10;
sum++;
 }
 printf("sum=%d",sum);
}
