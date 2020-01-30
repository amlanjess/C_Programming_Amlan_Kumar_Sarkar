#include<stdio.h>

int main()
{
    int n;
    //input an integer number
    printf("Please input an integer number: ");
    scanf("%d",&n);
    (n%2==0)&&printf("%d is an Even Number.",n);
    (n%2!=0)&&printf("%d is an ODD Number.",n);

    printf("\n");
    return 0;
}
