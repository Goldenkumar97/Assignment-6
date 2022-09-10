/* 8. Write a program to check whether a given number is a Prime number or
not. */
#include"stdio.h"
int main()
{
int i,num,flag=0;
printf("Enter a number ");
scanf("%d",&num);
for(i=2;i<num;i++)
{
    if(num%i==0)
    {
        flag=1;
        break;
    }
}
    if(flag==1)
    printf("not prime number");
    else
    printf(" prime number");
    return 0;
}