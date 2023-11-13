#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<math.h>
void bytecode();
void sutherland();
int a[4],b[4];
float m,xnew,ynew;
float xl = 100, yl = 100, xh = 300, yh = 300,xa =350,ya = 150,xb = 250, yb = 
150;
void main()
{
int gd = DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
setcolor(5);
line(xa,ya,xb,yb);
setcolor(12);
rectangle(xl,yl,xh,yh); //0001 x<xl 0101 x<xl y<yl 1010 x>xh y>yh
m = (yb-ya)/(xb-xa); //0010 x>xh 0110 x>xh y<yl
bytecode();
sutherland();
getch();
}
void bytecode()
{
if(xa < xl) //10<100
a[3] = 1; //1 left
else a[3] = 0;
if(xa>xh) //10>300
a[2] = 1; //0 right
else a[2] = 0;
if(ya < yl) //200<100
a[1] = 1; //0 bottom
else a[1] = 0;
if (ya > yh) //200>300
a[0] = 1; //0 top TBRL 0001
else a[0] = 0;
if(xb < xl) //250<100
b[3] = 1; //0
else b[3] = 0;
if(xb>xh) //250>300
b[2] = 1; //0
else b[2] = 0;
if(yb < yl) // 150<100
b[1] = 1; //0
else b[1] = 0;
if (yb > yh) // 150> 300
b[0] = 1; //0 TBRL 0000
else b[0] = 0;
}
void sutherland()
{
printf("press a key to continue");
getch();
if(a[0] == 0 && a[1] == 0 && a[2] == 0 && a[3] == 0 && b[0] == 0 && b[1] == 0 
&& b[2] == 0 && b[3] == 0 )
{
printf("no clipping");
line(xa,ya,xb,yb);
}
else if(a[0]&&b[0] || a[1]&&b[1] || a[2]&&b[2] || a[3]&&b[3])
{
clrscr();
printf("line discarded");
rectangle(xl,yl,xh,yh);
}
else
{
if(a[3] == 1 && b[3]==0)
{
ynew = (m * (xl-xa)) + ya;
setcolor(12);
rectangle(xl,yl,xh,yh);
setcolor(0);
line(xa,ya,xb,yb);
setcolor(15);
line(xl,ynew,xb,yb);
}
else if(a[2] == 1 && b[2] == 0)
{
ynew = (m * (xh-xa)) + ya;
setcolor(12);
rectangle(xl,yl,xh,yh);
setcolor(0);
line(xa,ya,xb,yb);
setcolor(15);
line(xh,ynew,xb,yb);
}
else if(a[1] == 1 && b[1] == 0)
{
xnew = xa + (yl-ya)/m;
setcolor(0);
line(xa,ya,xb,yb);
setcolor(15);
line(xnew,yh,xb,yb);
}
else if(a[0] == 1 && b[0] == 0)
{
xnew = xa + (yh-ya)/m;
setcolor(0);
line(xa,ya,xb,yb);
setcolor(15);
line(xnew,yh,xb,yb);
}
}
}
