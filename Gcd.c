#include<stdio.h>
int gcd(int a,int b)
{
    if(b==0)
{
return a;
}
return gcd(b,a%b);
}
int main()
{
    int a,b;
    printf("enter the value of a & b\n");
    scanf("%d %d",&a,&b);
    printf("gcd of %d and %d is %d",a,b,gcd(a,b));
}