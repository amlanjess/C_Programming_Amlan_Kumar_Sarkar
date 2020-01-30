#include<stdio.h>
void main()
{
    int i = 0;
    while(i<10)
    {
        i++;
        printf("hi\n");
        while(i<8)
        {
            i++;
            printf("Hello\n");
        }
    }
}


// Output: Hi prints 3 times and Hello prints 7 times.
