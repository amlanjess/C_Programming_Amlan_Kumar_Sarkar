#include<stdio.h>
#include<conio.h>
//#include<stdlib.h>
//#include<Math.h>

void main()
{
    int a,b,c;
    printf("Enter the No for a & b:\n");
    scanf("%d%d",&a,&b);
    b=(a+b)-(a=b);
    printf("%d=a and %d=b",a,b);
}

