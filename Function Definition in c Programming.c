#include<stdio.h>

int plus(int n1,int n2)
{
 return(n1+n2);
}

int main()
{
 int no1=11,no2=22;
 int result;

  result = plus(no1, no2);
 printf("\nOutput : %d",result);
 return(0);
}
