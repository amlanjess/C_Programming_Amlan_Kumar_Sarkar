/*
Print the negative & positive value of User input.
*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n,ne=0,po=0;
    int a[80];
    printf("How many values?\n");
    scanf("%d",&n);
    printf("The %d Values are:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<0)
            ne++;
        else
            po++;
    }
    printf("Your Negative values are:%d\n",ne);
    printf("Your Positive values are:%d\n",po);

}
