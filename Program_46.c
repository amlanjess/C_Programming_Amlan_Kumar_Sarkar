//Palindrom Number

#include<stdio.h>
#include<conio.h>

void main()
{
    char a[80];
    int l,t,f=0,i;
    printf("Enter a word\n");
    scanf("%s",a);
    l=strlen(a);
    t=(l)/2;
    for(i=0;i<=t;i++)
    {
        if(a[i]!=a[l-1-i])
        {
            f=1;
            break;
        }
    }
    if(f==0)
        printf("Palindrom.\n");
    else
        printf("Not Palindrom");
}
