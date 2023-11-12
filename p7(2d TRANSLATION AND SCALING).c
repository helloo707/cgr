#include <stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
    int x1,x2,y1,y2;

void translate();
void scale();
void draw(int ,int , int,int);

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\tc\\bgi");
    printf("\n ENTER X1,Y1 VALUES: ");
    scanf("%d%d",&x1,&y1);
    printf("\n ENTER X2,Y2 VALUES: ");
    scanf("%d%d",&x2,&y2);
    cleardevice();
    draw(x1,y1,x2,y2);
    scale();
    translate();
    getch();
    closegraph();
    return 0;
}

void draw(int x1,int y1,int x2,int y2){
    rectangle(x1,y1,x2,y2);
}

void translate(){
     int x,y,a1,a2,b1,b2;
     printf("\nENTER TRANSLATION CO-ORDINATES: ");
     scanf("%d%d",&x,&y);
     a1=x1+x;
     b1=y1+y;
     a2=x2+x;
     b2=y2+y;
     draw(a1,b1,a2,b2);
}

void scale(){
     int x,y,a1,a2,b1,b2;
     printf("\nENTER SCALING CO-ORDINATES: ");
     scanf("%d%d",&x,&y);
     a1=x1*x;
     b1=y1*y;
     a2=x2*x;
     b2=y2*y;
     draw(a1,b1,a2,b2);
}
