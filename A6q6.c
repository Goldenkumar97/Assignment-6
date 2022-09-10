// 6. Write a program to calculate factorial of a number.
#include"stdio.h"
int main()
{
    int i,facto=1,num;
    printf("Enter a number ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        facto=facto*i;
    }
    printf("%d",facto);

    return 0;
}