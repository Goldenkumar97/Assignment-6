/*1. Write a program to calculate sum of 
first N natural numbers.*/
#include"stdio.h"
int main()
{
int i,num,sum=0;
printf("Enter any number ");
scanf("%d",&num);
for(i=1;i<=num;i++)
    {
    sum=sum+i;
    }
printf("sum of %d till natural number= %d",num,sum);
    return 0;
}