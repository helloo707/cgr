#include <stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>

void fillcolour(int x,int y,int oc,int nc);

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

    rectangle(50,50,150,150);
    fillcolour(55,55,0,10);
    getch();
    closegraph();
    return 0;
}

void fillcolour(int x,int y,int oc,int nc){

     if(getpixel(x,y)==oc){
       putpixel(x,y,nc);
       fillcolour((x+1),y,oc,nc);
       fillcolour((x+1),(y-1),oc,nc);
       fillcolour(x,(y-1),oc,nc);
       fillcolour((x-1),(y-1),oc,nc);
       fillcolour((x-1),y,oc,nc);
       fillcolour((x-1),(y+1),oc,nc);
       fillcolour(x,(y+1),oc,nc);
       fillcolour((x+1),(y+1),oc,nc);
       delay(10);
     }
}
