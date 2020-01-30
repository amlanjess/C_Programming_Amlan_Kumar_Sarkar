#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,c, fact=1;
    printf("Enter the Number:");
    scanf("%d",&n);
    for(c=1;c<=n;c++)
    {
        fact=fact*c;
    }
    printf("Factorial of %d=%d\n",n,fact);
    return 0;
}
