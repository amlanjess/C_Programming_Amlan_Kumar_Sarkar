#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,r,s=0,t;
printf("Enter the No:");
scanf("%d",&n);
t=n;
while(n!=0)
{
    r=n%10;
    s=s+(r*r*r);
    n=n/10;
}
if (s==t)
{
    printf("Arm Number.");
}
else
{
    printf("Not Arm Number.");
}
return 0;
}
