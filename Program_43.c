/*
Print the Prime Numbers and add total Value of the prime numbers.
*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int i,n,d,c=0,f;
    int a[80];
    printf("How many values?\n");
    scanf("%d",&n);
    printf("The %d Values are:\n",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        f=0;
        d=2;
        while(d<a[i])
        {
            if(a[i]%d==0)
            {
             f=1;
             break;
            }

            f=1;
            break;
        }
        d++;
    }
        if(f==0)
        {
        printf("%d\n",a[i]);
        c++;
        }
        printf("Total Prime Numbers are=%d\n",d);
}



