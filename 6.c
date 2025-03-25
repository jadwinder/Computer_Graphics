//6. WAP to draw a hut and fill color.

#include<stdio.h>
#include<conio.h> 
#include<graphics.h> 
void main() 
{
	int gd=DETECT,gm; 
	clrscr(); 
	initgraph(&gd,&gm,"C:/turboc3/bgi");
	setcolor(5);
	rectangle(50,180,150,300);
	setfillstyle(6,1);
	floodfill(100,260,5);
	rectangle(150,180,320,300);

	setfillstyle(11,14); 
	floodfill(220,260,5); 
	rectangle(80,250,120,300); 
	setfillstyle(11,5); 
	floodfill(100,275,5); 
	rectangle(200,250,250,220); 
	setfillstyle(8,4);
	floodfill (225,230,5); 
	line(100,100,50,180); 
	line(100,100,150,180); 
	setfillstyle(9,4); 
	floodfill(100,140,5); 
	circle(100,150,10); 
	setfillstyle(7,2); 
	floodfill(100,150,5); 
	line(100,100,300,100); 
	line(300,100,320,180); 
	setfillstyle(5,6); 
	floodfill(210,140,5); 
	getch(); 
}


