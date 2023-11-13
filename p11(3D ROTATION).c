#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

int maxx,maxy,midx,midy;

void axis(){
getch();
cleardevice();
line(midx,0,midx,maxy); 
line(0,midy,maxx,midy);
}

void main(){
int x,y,z,o,x1,x2,y1,y2;
int gd=DETECT,gm; 
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\tc\\bgi"); 
maxx=getmaxx();
maxy=getmaxy(); 
midx=maxx/2; //12
midy=maxy/2; //40
axis();
bar3d(midx+50,midy-150,midx+90,midy-120,5,1);

printf("Enter rotating angle: ");
scanf("%d",&o);
x1=50*cos(o*3.14/180)-150*sin(o*3.14/180); //xcos(@)-ysin(@)
y1=50*sin(o*3.14/180)+150*cos(o*3.14/180); //xsin(@)+ycos(@)
x2=90*cos(o*3.14/180)-120*sin(o*3.14/180); 
y2=90*sin(o*3.14/180)+120*cos(o*3.14/180); 
axis();
printf("\nAfter rotation about z axis");
bar3d(midx+x1,midy-y1,midx+x2,midy-y2,5,1); 
axis();
printf("\nAfter rotation about x axis"); 
bar3d(midx+50,midy-x1,midx+90,midy-x2,5,1); 
axis();
printf("\nAfter rotation about yaxis"); 
bar3d(midx+x1,midy-150,midx+x2,midy-120,5,1);
getch();
closegraph();
}
