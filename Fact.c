#include <stdio.h>
int fact(int);
void main()
{
int num,result;
printf("Enter a number: ");
scanf("%d", &num);
if (num < 0)
{
printf("Error!");
}
else
{
 result = fact(num);
 printf("The Factorial of %d is %d.\n", num, result);
}
}
int fact(int num)
{
if (num == 0 || num == 1)
{
return 1;
}
else
{
return(num * fact(num - 1));
}
}
