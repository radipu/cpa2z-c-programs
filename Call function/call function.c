#include<stdio.h>

int add(int,int);

int main()
{
   int sum,num1,num2;

   num1 = 10;
   num2 = 20;

   sum = add(num1,num2);

   printf("Sum is : %d\n",sum);
   return 0;
}

int add(int n1,int n2)
{
  return (n1+n2);
}
