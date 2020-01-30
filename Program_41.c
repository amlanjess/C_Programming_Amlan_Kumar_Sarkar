/*
Print the Sum of Even & Odd No. of User input.
*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n,ev=0,od=0;
    int a[80];
    printf("How many values?\n");
    scanf("%d",&n);
    printf("The %d Values are:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
            ev=ev+a[i];
        else
            od=od+a[i];
    }
    printf("Your Even values are:%d\n",ev);
    printf("Your Odd values are:%d\n",od);

}

