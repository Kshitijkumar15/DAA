#include<stdio.h>
#include<stdlib.h>


void hanoi(int n, char rodFrom,char rodTo,char rodMiddle)
{
if(n==1)
{
    printf("Disk 1 is moved form %c to %c \n",rodFrom,rodTo);
    return;
}

    hanoi(n-1,rodFrom,rodTo,rodMiddle);
    printf("Disk %d is moved from %c to %c\n",n,rodFrom,rodTo);
    hanoi(n-1,rodMiddle,rodFrom,rodTo);
}
int main()
{

    int n;
    printf("Enter no of disk\n");
    scanf("%d",&n);
    hanoi(n,'A','B','C');
}

