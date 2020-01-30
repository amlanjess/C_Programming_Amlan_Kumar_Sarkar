/*
Print the User input value by for loop.
*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n;
    int a[80];
    printf("How many values?\n");
    scanf("%d",&n);
    printf("The %d Values are:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Your entered values are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
