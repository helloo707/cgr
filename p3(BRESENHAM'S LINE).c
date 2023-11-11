#include <stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>

int main()
{
    int x1,y1,x2,y2,dx,dy,e,x,y;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\tc\\bgi");
    printf("ENTER VALUE OF X1,Y1: ");
    scanf("%d%d",&x1,&y1);
    printf("ENTER VALUE OF X2,Y2: ");
    scanf("%d%d",&x2,&y2);
    dx=x2-x1;
    dy=y2-y1;
    e=(2*dy)-dx;
    x=x1;
    y=y1;
    while(x<=x2){
         if(e<0){
             putpixel(x,y,10);
             x=x+1;
             y=y;
             e=e+(2*dy);
             delay(5);
         }else{
             putpixel(x,y,10);
             x=x+1;
             y=y+1;
             e=e+(2*dy)-(2*dx);
             delay(5);
         }
    }
    getch();
    closegraph();
    return 0;
}
