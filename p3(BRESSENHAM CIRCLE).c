#include <stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>

void plot(int xc,int yc,int x,int y);
void bressen(int xc,int yc,int r);

int main()
{
    int xc,yc,r;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\tc\\bgi");
    printf("ENTER VALUE OF XC,YC,RADIUS: ");
    scanf("%d%d%d",&xc,&yc,&r);
    bressen(xc,yc,r);
    
    getch();
    closegraph();
    return 0;
}

void bressen(int xc,int yc,int r){
     int d,x,y;
     x=0;
     y=r;
     d=3-(2*r);
     while(x<y){
     if(d<0){
       plot(xc,yc,x,y);
       x=x+1;
       d=d+(4*x)+6;
     }else{
     plot(xc,yc,x,y);
       x=x+1;
       y=y-1;
       d=d+(4*(x-y))+10;
     }
   }
}

void plot(int xc,int yc,int x,int y){
     putpixel(xc+x,yc+y,10);
     putpixel(xc-x,yc+y,10);
     putpixel(xc-x,yc-y,10);
     putpixel(xc+x,yc-y,10);
     putpixel(xc+y,yc+x,10);
     putpixel(xc-y,yc+x,10);
     putpixel(xc-y,yc-x,10);
     putpixel(xc+y,yc-x,10);
}
