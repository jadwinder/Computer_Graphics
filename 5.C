//5. WAP to draw three rectangles with different fill styles
//[Hint : use setfillstyle() and floodfill() functions.
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main()
{
	int gdrive=DETECT,gmode;
	initgraph(&gdrive,&gmode,"C:/TURBOC3/BGI");

	rectangle(10,50,250,180);
	setfillstyle(SOLID_FILL,12);
	floodfill(60,165,WHITE);

	rectangle(10,250,250,370);
	setfillstyle(HATCH_FILL,BLUE);
	floodfill(60,260,WHITE);

	rectangle(300,50,550,180);
	setfillstyle(LINE_FILL,4);
	floodfill(500,80,WHITE);

	rectangle(300,250,550,370);
	setfillstyle(LTSLASH_FILL,11);
	floodfill(310,260,WHITE);

	getch();
	closegraph();
}
