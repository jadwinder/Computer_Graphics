
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gdrive=DETECT,gmode;
	initgraph(&gdrive, &gmode,"C:/turboc3/bgi");
	circle(300,240,200);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(310,250,WHITE);

	fillellipse(150,80,2,6);
	setfillstyle(SOLID_FILL,0);
	floodfill(500,450,WHITE);
	getch();
	closegraph();
}