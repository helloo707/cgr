#include <stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
int x1,y1,x2,y2;
void draw(int ,int ,int, int);

int main()
{
    int gd=DETECT,gm;
    int degree,a,b,c,d,xp,yp;
    initgraph(&gd,&gm,"C:\\tc\\bgi");
    printf("\n ENTER X1,Y1 VALUES: ");
    scanf("%d%d",&x1,&y1);
    printf("\n ENTER X2,Y2 VALUES: ");
    scanf("%d%d",&x2,&y2);
    cleardevice();
    draw(x1,y1,x2,y2);
    setcolor(7);
    printf("\n ENTER ANGLE FOR ROTATION: ");
    scanf("%d",&degree);
    a=cos((degree*3.14)/180);
    b=sin((degree*3.14)/180);
    c=(-sin((degree*3.14)/180));
    d=(cos((degree*3.14)/180));
    xp=((x2*a)-(y2*b));
    yp=((x2*c)-(y2*d));
    draw(x1,y1,xp,yp);
    getch();
    closegraph();
    return 0;
}

void draw(int x1,int y1,int x2,int y2){
    line(x1,y1,x2,y2);
}
