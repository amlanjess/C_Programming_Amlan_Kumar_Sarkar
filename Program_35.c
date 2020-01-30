 /*
Program to find Highest value of the input user by array
*/

#define N 10
#include<stdio.h>
#include<conio.h>

void main()
{
    int a[11],i,n,g;
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
     g=a[0];
        for(i=0;i<n;i++)
        {
            if(g<=a[i])
            {
                g=a[i];
            }

        }
        printf("The Highest Value of the input user is: %d\n",g);
}

