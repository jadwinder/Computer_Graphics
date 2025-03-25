//12. WAP to draw a concentric circle.

#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gd = DETECT , gm;
	int i,color,x,y;

	initgraph(&gd,&gm,"C:\turboc3\bgi");
	x=getmaxx()/2;
	y=getmaxy()/2;
	//setcolor(RED);
	for(i=20,color=1;i<=250,color<11;i+=20,color++)
	{
		circle(x,y,i);
		setcolor(color);
	}
	getch();
	closegraph();
}

