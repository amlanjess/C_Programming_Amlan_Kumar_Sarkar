#include<stdio.h>
#include<stdlib.h>

void main()
{
    int x,y;
    while(!kbhit())
    {
        x = random(80);
        y = random(80);
        gotoxy(x,y);
        printf("Amlan");
        delay(300);
        printf("\b\b\b\b\b\b\b\b\b\b");
        nosound();
        delay(400);
    }

}


//This program only print in turbo c/dos.h
