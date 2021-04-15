#include"head.h"
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>
void window_screen(int a,int b,int c,int d)
{
    int v;
    system("cls");
    gotocoordinate(20,10);
//textcolor(1);
    for (v=1; v<=10; v++)
        printf("*");
    printf(" * FASHION WEAR * ");
    for (v=1; v<=10; v++)
        printf("*");
    printf("\n\n");
    gotocoordinate(30,11);
    printf("Department Store");
//textcolor(4);
    for (v=a; v<=b; v++)
    {
        gotocoordinate(v,17);
        printf("\xcd");
        gotocoordinate(v,19);
        printf("\xcd");
        gotocoordinate(v,c);
        printf("\xcd");
        gotocoordinate(v,d);
        printf("\xcd");
    }

    gotocoordinate(a,17);
    printf("\xc9");
    gotocoordinate(a,18);
    printf("\xba");
    gotocoordinate(a,19);
    printf("\xc8");
    gotocoordinate(b,17);
    printf("\xbb");
    gotocoordinate(b,18);
    printf("\xba");
    gotocoordinate(b,19);
    printf("\xbc");

    for(v=c; v<=d; v++)
    {
        gotocoordinate(a,v);
        printf("\xba");
        gotocoordinate(b,v);
        printf("\xba");
    }
    gotocoordinate(a,c);
    printf("\xc9");
    gotocoordinate(a,d);
    printf("\xc8");
    gotocoordinate(b,c);
    printf("\xbb");
    gotocoordinate(b,d);
    printf("\xbc");

}
