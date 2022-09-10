// 10. Write a program to reverse a given number.
#include"stdio.h"
int main()
{
int  i,num,reverse=0,reminder;
printf("Enter number ");
scanf("%d",&num);
while(num !=0)
{
    reminder=num%10;
    num=num/10;
    reverse=reverse*10 + reminder;
    
}
printf("Reverse %d",reverse);
return 0;
}