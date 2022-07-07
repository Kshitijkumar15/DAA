#include<stdio.h>
int main()
{
    int n,i;
    int factorial=1;
    printf("Enter an integer");
    scanf("%d",&n);
    if(n<0)
    {
        printf("error");
    }
    else
    {
     for(i=1;i<=n;i++)
     {
         factorial=factorial*i;
     }
     printf("the factorial of %d = %d",n,factorial);

    }
}