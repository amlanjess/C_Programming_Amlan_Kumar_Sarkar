/*
Program to print the value of user's input while there is a limit for taking the value.
*/

#define N 10
#include<stdio.h>
#include<conio.h>

void main()
{
    int a[11],i,n;
    do
    {
        printf("Enter the Limit:\n");
        scanf("%d",&n);
    }while(n>=11 || n<=0);
    printf("Enter %d value:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        printf("Your Values are:\n");
        for(i=0;i<n;i++)
        {
            printf("%d\n",a[i]);
        }

}
