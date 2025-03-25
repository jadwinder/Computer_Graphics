//11. WAP to draw a sine wave.

#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gd = DETECT , gm;
	int angle = 0;
	double x,y;

	initgraph(&gd,&gm,"C:\turboc3\bgi");

	line(0,getmaxy()/2,getmaxx(),getmaxy()/2);


	//generate sin wave
	for(x=0;x<getmaxx();x+=3)
	{
		y=50*sin(angle*3.1416/180);
		y=getmaxy()/2-y;
		putpixel(x,y,15);
		delay(100);
		angle+=5;
	}

	getch();
	closegraph();

}
