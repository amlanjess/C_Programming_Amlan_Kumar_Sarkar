#include<stdio.h>
int main()
{
    int y=1,x=0;
    int a= (y++,x++)?y:x;
    printf("%d\n",a);
}
