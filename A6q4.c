/* 4. Write a program to calculate sum of squares of first N 
natural numbers.*/
#include"stdio.h"
int main()
{
    int i,num,sum=0;
    printf("Enter any number ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        sum=sum+ ( i * i );
    }
    printf("%d",sum);
    return 0;
}