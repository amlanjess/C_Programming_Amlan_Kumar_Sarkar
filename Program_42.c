/*
Print the Reverse Value of the User input.
*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n,t;
    int a[80];
    printf("How many values?\n");
    scanf("%d",&n);
    printf("The %d Values are:\n",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++)
    {
        t=a[i];
        a[i]= a[n-i-1];
        a[n-i-1]=t;
    }
    printf("Reverse values Check:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }

}


