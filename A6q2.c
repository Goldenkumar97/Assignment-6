/* 2. Write a program to calculate sum of first N even 
natural numbers. */
#include"stdio.h"
int main()
{
int i,num,sum=0;
printf("Enter any number ");
scanf("%d",&num);
for(i=1;i<=num;i++)
{

    sum=sum+i*2;
}
printf("%d",sum);
    return 0;
} 