/* 3. Write a program to calculate sum of first N odd
 natural numbers.*/
 #include"stdio.h"
 int main()
 {
int i,num,sum=0;
printf("Enter any numbers ");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
    sum=sum+ ( i * 2 - 1 );

}
printf("%d",sum);
    return 0;
 }