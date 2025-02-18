//6. WAP to draw colorful hut.
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gdrive=DETECT,gmode;
	initgraph(&gdrive, &gmode,"C:/turboc3/bgi");
	moveto(80,90);
	//TRIANGLE
	linerel(50,100);
	linerel(-100,0);
	linerel(50,-100);

	//ROOF
	linerel(300,0);
	setfillstyle(SOLID_FILL,6);
	floodfill(80,100,WHITE);
	//linerel(300,0);
	linerel(0,250);
	linerel(-350,0);
	linerel(0,-152);
	//floodfill(100,200,WHITE);
	line(29,190,381,190);
	setfillstyle(HATCH_FILL,GREEN);
	floodfill(300,100,WHITE);
	setfillstyle(SOLID_FILL,17);
	floodfill(100,200,WHITE);
	line(130,190,130,340);
	getch();
}