//Write a C program to check whether a given number is prime or not using a for loop and conditional statements
#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x<2)
    {
        printf("%d is not prime",x);
    return 0;
    }
    for(int i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            printf("%d is not prime",x);
            return 0;
        }
    }
    printf("%d is prime",x);
    return 0;

}
