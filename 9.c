//9. WAP to draw Bar Chart.

#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
	int gd = DETECT , gm , i, b=120 ;

	float x[3] , y=0.0 , a[3];
	initgraph(&gd,&gm,"C:/turboc3/bgi");
	clrscr();

	printf("Enter the population of 3 countries\n");
	for(i=0;i<3;i++)
	{
		scanf("%f",&x[i]);
	}
	y=x[0]+x[1]+x[2];

	line(100,400,400,400);
	line(100,100,100,400);

	settextstyle(0,1,2);
	outtextxy(100,200,"POPULATION");
	settextstyle(0,0,2);
	outtextxy(100,400,"STATES");

	outtextxy(50,420,"(100,400)");

	for(i=0;i<3;i++)
	{
		a[i]=400-((x[i]/y)*300);
	}

	for(i=0;i<3;i++)
	{

		bar(b,a[i],b+30,400);
		b=b+60;
	}


	getch();
	closegraph();

}
