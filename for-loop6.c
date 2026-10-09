#include<stdio.h>
int main()
{
  int n,i, fact=1;
  printf("enter a number:");
  scanf("%d",&n);
  for(i=1;i<=10;i=i+1)
  {
  fact=fact*i;
  }
  printf("%d*%d=%d\n",n,i,n*i);

}
