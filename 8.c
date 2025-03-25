//8. WAP to draw a Smiley Face.

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int n, gm, gd = DETECT;
	clrscr();
	initgraph(&gd,&gm,"c:/turboc3/bgi");

	setfillstyle(1,14);
	circle(150,150,50);
	floodfill(160,160,15);

	setfillstyle(1,4);
	circle(170,130,5);
	floodfill(172,132,15);

	setfillstyle(1,4);
	circle(130,130,5);
	floodfill(132,132,15);

	setcolor(0);

	ellipse(150,150,200,330,25,25);
	getch();
}


