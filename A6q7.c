//7. Write a program to count digits in a given number.
#include"stdio.h"
int main()
{

int i,num,count=0;
printf("Enter a number ");
scanf("%d",&num);
while(num  != 0)
  {
    num=num/10;
    count++;
    
  }
  printf("%d",count);
    return 0;
}