/*
Program to Highest value of the input user by array
*/

#define N 10
#include<stdio.h>
#include<conio.h>

void main()
{
    int a[11],i,n,g;
    int even=0,odd=0;
    do
    {
        printf("Enter the Limit:\n");
        scanf("%d",&n);
    }while(n>=11 || n<=0);
    printf("Enter %d value:\n",n);
    for(i=11;i>n;i--)
    {
        scanf("%d",&a[i]);
    }
     g=a[11];
        for(i=11;i>n;i--)
        {
            if(g>=a[i])
            {
                g=a[i];
            }

        }
        printf("The Lowest Value of the input user is: %d\n",g);
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }
printf("Total Even No:%d\n",even);
printf("Total Odd No:%d\n",odd);
}



