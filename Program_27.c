#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, f=1;
    printf("Enter the number:");
    scanf("%d",&n);
    switch(n)
    {
    case 5:
        f=f*n;

        case 4:
        f=f*4;

        case 3:
        f=f*3;

        case 2:
        f=f*2;

        case 1:
        printf("Factorial of %d\n",f);
        break;
        default:
        printf("No>5");
        return 0;
    }
}
