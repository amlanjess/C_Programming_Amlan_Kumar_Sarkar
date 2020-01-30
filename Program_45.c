//Palindrom Number

#include<stdio.h>
#include<conio.h>

void main()
{
    char a[80],b[80];
    printf("Enter a Number:\n");
    scanf("%s",a);
    strcpy(b,a);
    strrev(b);
    if(strcmp(b,a)==0)
        printf("Palindrom Number");
    else
        printf("Not Palindrom Number");
}
