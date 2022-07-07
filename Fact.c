#include<stdio.h>
int fact(int n)
{
    if(n==1 || n==0)
        return 1;
    else{
        int b;

        b= (n*fact(n-1));
        return b;
    }
}
void main()
{
    int num,a;
    scanf("%d",&num);
    if(num%2==0)
    {
        int n;
        printf("Enter the number :");
        scanf("%d",&n);
       a= fact(n);
       printf(a);
        
    }
    else
        printf("Number is odd");
}