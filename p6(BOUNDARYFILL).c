#include <stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>

void boundaryf(int x,int y,int fc,int bc);

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\tc\\bgi");

    rectangle(50,50,150,150);
    boundaryf(55,55,15,11);
    getch();
    closegraph();
    return 0;
}

void boundaryf(int x,int y,int fc,int bc){

     if(getpixel(x,y)!=bc && getpixel(x,y)!=fc){
       delay(10);
       putpixel(x,y,fc);
       boundaryf((x+1),y,fc,bc);
       boundaryf((x+1),(y-1),fc,bc);
       boundaryf(x,(y-1),fc,bc);
       boundaryf((x-1),(y-1),fc,bc);
       boundaryf((x-1),y,fc,bc);
       boundaryf((x-1),(y+1),fc,bc);
       boundaryf(x,(y+1),fc,bc);
       boundaryf((x+1),(y+1),fc,bc);
     }
}
