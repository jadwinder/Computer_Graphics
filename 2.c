//2. WAP to print lines with different styles.
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main()
{
	int gdrive=DETECT,gmode;
	initgraph(&gdrive,&gmode,"C:/TURBOC3/BGI");

	setlinestyle(0,0,1);
	line(200,100,400,100);

	setlinestyle(1,0,1);
	line(200,125,400,125);

	setlinestyle(2,0,1);
	line(200,150,400,150);

	setlinestyle(3,0,1);
	line(200,200,400,200);

	setlinestyle(4,0,1);
	line(200,220,400,220);


	getch();
	closegraph();
}
