//3. WAP to draw basic shapes [Hint: line, rectangle, triangle, square, circle, ellipse, arc and polygon]

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{

	int gdrive=DETECT,gmode;
	int arr[] ={300,300,420,270,340,470,300,300};
	initgraph(&gdrive, &gmode,"C:/turboc3/bgi");

	//rectangle
	rectangle(30,90,200,180);

	//triangle
	line(430,80,360,180);
	line(360,180,500,180);
	line(500,180,430,80);

	//square

	rectangle(100,300,200,400);

	//Polygon
	drawpoly(4,arr);

	//Circle
	circle(570,130,50);

	//arc
	arc(530,380,0,100,50);

	//ellipse
	ellipse(300,140,0,240,30,100);


	getch();
	closegraph();
}


