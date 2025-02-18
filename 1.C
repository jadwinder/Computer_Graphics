#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	int gd=DETECT,gm;
       initgraph(&gd,&gm,"C:/turboc3/bgi");
       settextstyle(8,0,5);
       outtextxy(50,100,"Computer Graphics");

	settextstyle(7,0,5);
       outtextxy(50,150,"Computer Graphics");

	settextstyle(6,0,5);
       outtextxy(50,200,"Computer Graphics");

	settextstyle(5,0,5);
       outtextxy(50,250,"Computer Graphics");

	settextstyle(4,0,5);
       outtextxy(50,300,"Computer Graphics");
       getch();
       closegraph();

}