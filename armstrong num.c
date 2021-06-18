#include<stdio.h>
int main()
{
   int num,num1,sum=0,r;

   //Store input number in variable num
   printf("\nEnter a number:");
   scanf("%d",&num);
   num1 = num;

   while (num != 0)
   {
      r = num % 10;
      sum = sum + (r*r*r);
      num = num / 10;
   }


   if(num1 == sum)
      printf("\n%d is an Armstrong Number",num1);
   else
      printf("\n%d is not an Armstrong Number",num1);
   return(0);
}
