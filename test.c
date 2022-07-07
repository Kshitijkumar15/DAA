#include <stdio.h>
#include <stdlib.h>
void hanoi(int n, char rodFrom, char rodTo, char rodMiddle)
{
    if (n == 1)
    {
        printf("Disk 1 is moved form %c to %c \n", rodFrom, rodTo);
        return;
    }

    hanoi(n - 1, rodFrom, rodTo, rodMiddle);
    printf("Disk %d is moved from %c to %c\n", n, rodFrom, rodTo);
    hanoi(n - 1, rodMiddle, rodFrom, rodTo);
}
void main()
{
    int num;
    printf("Enter the number ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        int n;
        printf("Enter no of disk\n");
        scanf("%d", &n);
        hanoi(n, 'A', 'B', 'C');
    }
    else
    {
        int n, i;
        int factorial = 1;
        printf("Enter an integer");
        scanf("%d", &n);
        if (n < 0)
        {
            printf("error");
        }
        else
        {
            for (i = 1; i <= n; i++)
            {
                factorial = factorial * i;
            }
            printf("the factorial of %d = %d", n, factorial);
        }
    }
}