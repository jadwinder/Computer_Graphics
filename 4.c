//4. WAP to draw basic shapes using linerel() function [Hint: rectangle, triangle , square and polygon]

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gdrive=DETECT,gmode;
	initgraph(&gdrive, &gmode,"C:/turboc3/bgi");
	moveto(10,50);
	linerel(100,0);
	linerel(0,100);
	linerel(-100,0);
	linerel(0,-100);
	settextstyle(6,0,4);
	outtextxy(10,150,"Square");
	moveto(210,50);
	linerel(60,100);
	linerel(-110,0);
	linerel(50,-100);
	settextstyle(6,0,4);
	outtextxy(170,150,"Triangle");
	moveto(300,50);
	linerel(0,100);
	linerel(170,0);
	linerel(0,-100);
	linerel(-170,0);
	settextstyle(6,0,4);
	outtextxy(330,150,"Rectangle");
	moveto(20,250);
	linerel(-20,100);
	linerel(160,0);
	linerel(20,-100);
	linerel(-160,0);
	settextstyle(6,0,4);
	outtextxy(8,350,"Quadilateral");
	getch();
	closegraph();
}
