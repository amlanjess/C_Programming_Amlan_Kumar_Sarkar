/*
Find the Diagonal Elements
*/

#include<stdio.h>
#include<conio.h>

void main()
{
    int a[3][3];
    int s=0,i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                s+=a[i][j];
            }
            printf("\n");
        }
        printf("Sum of Diagonal:%d",s);
    }
}
