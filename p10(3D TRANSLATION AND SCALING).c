#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<process.h>
#include<graphics.h>

int x1, x2, y1, y2, mx, my, depth;
void draw();
void trans();

void main() {
int gd = DETECT, gm, c;
 initgraph(&gd, &gm, "C:\\tc\\bgi");
 printf("\n\t\t3D Translation\n\n");
 printf("\nEnter 1st left top value(x1,y1):");
 scanf("%d%d", &x1, &y1);
 printf("Enter right bottom value(x2,y2):");
 scanf("%d%d", &x2, &y2);
 depth = (x2 - x1) / 4;
  mx = (x1 + x2) / 2;
  my = (y1 + y2) / 2;
 draw();
 getch();
 trans();
 getch();
 closegraph();
}

void draw() {
 bar3d(x1, y1, x2, y2, depth, 1);
}

void trans(){
 int a1, a2, b1, b2, dep, tx, ty;
 printf("\n Enter the Transition Co ordinates:");
 scanf("%d%d", &tx, &ty);
 a1 = x1 + tx;
 a2 = x2 + tx;
 b1 = y1 + ty;
 b2 = y2 + ty;
 dep = (a2 - a1) / 4;
 draw();
setcolor(5);
 bar3d(a1, b1, a2, b2, dep, 1);
}
