#ifndef __HEAD_H__
#define __HEAD_H__
#define CNN 15
#define CBN 4
void window_screen(int a,int b,int c,int d);
void gotocoordinate(int x,int y);
typedef struct
{
    char name[CNN],code[CBN];
    float rate;
    int quantity;
} record;
record stocks;
#endif