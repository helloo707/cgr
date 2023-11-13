//reflection x and y axis

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
void main()
{
int gd=DETECT, gm, midx, midy;
clrscr();
initgraph(&gd,&gm,"C:\\tc\\bgi");
midx=getmaxx()/2;
midy=getmaxy()/2;
line(midx,0,midx,getmaxy());
line(midx-midy,midy,midx+midy,midy);

//triangle
line(midx+20,midy-10,midx+100,midy-10);
line(midx+100,midy-10,midx+100,midy-50);
line(midx+100,midy-50,midx+20,midy-10);

//x-axis reflection
setcolor(4);
line(midx-20,midy-10,midx-100,midy-10);
line(midx-100,midy-10,midx-100,midy-50);
line(midx-100,midy-50,midx-20,midy-10);

//y-axis reflection
setcolor(6);
line(midx+20,midy+10,midx+100,midy+10);
line(midx+100,midy+10,midx+100,midy+50);
line(midx+100,midy+50,midx+20,midy+10);

getch();
closegraph();
}




//shearing 

#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <stdlib.h>
#include <dos.h>
//x1,y1=200 200 || x2,y2= 300 300 || x-shear=0.2 || y-shear = 0.5
int main()
{
    float x1,y1,x2,y2,x,y;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\tc\\bgi");
    printf("\nENTER X1,Y1: ");
    scanf("%f%f",&x1,&y1);
    printf("\nENTER X2,Y2: ");
    scanf("%f%f",&x2,&y2);
    printf("\nENTER VALUE FOR X SHEAR: ");
    scanf("%f",&x);
    printf("\nENTER VALUE FOR Y SHEAR: ");
    scanf("%f",&y);
    rectangle(x1,y1,x2,y2);
    
    printf("\nHIT ANY KEY TO SEE X-SHEAR: ");
    getch();
    setcolor(RED);
    rectangle(x1,y1,x2*x,y2);
    printf("\nHIT ANY KEY TO SEE Y-SHEAR: ");
    getch();
    setcolor(GREEN);
    rectangle(x1,y1,x2,y2*y);
    getch();
    closegraph();
    return 0;
}
