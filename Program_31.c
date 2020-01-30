#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,r,s=0;
printf("Enter the No:");
scanf("%d",&n);
while(n!=0)
{
    r=n%10;
    s=s+10+r;
    n=n/10;
}
    printf("Results is:%d",s);
return 0;
}


