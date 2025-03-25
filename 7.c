//7. WAP to draw an Eiffel Tower.

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\turboc3\\bgi");
    moveto(60,400);
    linerel(100,0);
    linerel(50,-100);
    linerel(-100,0);
    linerel(-50,100);
    line(92,335,193,335);
    line(77,367,177,367);
    //right side
    moveto(350,400);
    linerel(100,0);
    linerel(-50,-100);
    linerel(-100,0);
    linerel(50,100);
    line(319,335,418,335);
    line(333,367,432,367);

    //lines of right side
    moveto(350,400);
    linerel(84,-33);
    linerel(-115,-33);
    linerel(82,-33);
    moveto(450,400);
    linerel(-115,-32);
    linerel(83,-33);
    linerel(-115,-34);


    //lines of left side
    moveto(60,400);
    linerel(115,-33);
    linerel(-83,-33);
    linerel(115,-33);
    moveto(160,400);
    linerel(-84,-32);
    linerel(116,-32);
    linerel(-83,-35);

    moveto(200,300);
    linerel(150,0);
    line(100,290,410,290);
    line(110,290,110,300);
    line(400,290,400,300);
    line(100,280,100,290);
    line(410,280,410,290);
    line(100,280,410,280);
    line(110,270,400,270);
    line(110,270,110,280);
    line(400,270,400,280);

    //upper left
    moveto(120,270);
    linerel(30,-70);
    linerel(90,0);
    linerel(-30,70);

    //upper right
    moveto(387,270);
    linerel(-30,-70);
    linerel(-90,0);
    linerel(30,70);
    line(240,200,320,200);

    //upper left lines
    moveto(120,270);
    linerel(105,-35);
    linerel(-75,-34);
    line(136,235,223,235);
    moveto(209,270);
    linerel(-73,-36);
    linerel(106,-34);

    //upper right lines
    moveto(295,270);
    linerel(77,-35);
    linerel(-103,-33);
    line(282,235,372,235);
    moveto(388,270);
    linerel(-107,-36);
    linerel(77,-34);

    //upper empty horizontal box
    line(144,200,150,200);
    line(355,200,363,200);
    moveto(144,200);
    linerel(0,-10);
    linerel(220,0);
    linerel(0,10);

  
  //upper filled box
    moveto(150,190);
    linerel(0,-15);
    linerel(207,0);
    //linerel(0,15);
    line(158,175,158,190);
    line(166,175,166,190);
    line(174,175,174,190);
    line(182,175,182,190);
    line(190,175,190,190);
    line(198,175,198,190);
    line(206,175,206,190);
    line(214,175,214,190);
    line(222,175,222,190);
    line(230,175,230,190);
    line(238,175,238,190);
    line(246,175,246,190);

    line(254,175,254,190);
    line(262,175,262,190);
    line(270,175,270,190);
    line(278,175,278,190);
    line(286,175,286,190);
    line(294,175,294,190);
    line(302,175,302,190);
    line(310,175,310,190);
    line(318,175,318,190);
    line(326,175,326,190);
    line(334,175,334,190);
    line(342,175,342,190);
    line(350,175,350,190);
    line(358,175,358,190);

    //triangle
    moveto(182,175);
    linerel(75,-150);
    linerel(75,150);
    line(257,10,257,175);

    //triangle straight lines
    line(195,150,320,150);
    line(206,125,306,125);
    line(220,100,294,100);
    line(232,75,282,75);
    line(245,50,270,50);

    //triangle zig zag lines (left to right)
    moveto(182,175);
    linerel(139,-24);
    linerel(-116,-26);
    linerel(91,-24);
    linerel(-65,-26);
    linerel(40,-24);


    //right to left
    moveto(332,174);
    linerel(-137,-23);
    linerel(110,-25);
    linerel(-84,-27);
    linerel(60,-23);
    linerel(-35,-25);

    //curvy lines
    moveto(111,300);
    linerel(5,-10);
    linerel(6,10);
    linerel(7,-10);
    linerel(7,10);
    linerel(7,-10);
    linerel(7,10);
    linerel(7,-10);
    linerel(7,10);
    linerel(7,-10);
    linerel(7,10);
    linerel(7,-10);
    linerel(7,10);
    linerel(7,-10);
    linerel(7,10);
    linerel(7,-10);
    linerel(7,10);
    linerel(7,-10);
    linerel(7,10);
    linerel(7,-10);
    linerel(7,10);
    linerel(7,-10);
    linerel(7,10);
    linerel(7,-10);
    linerel(7,10);
    linerel(7,-10);
    linerel(7,10);
    linerel(7,-10);
    linerel(7,10);
    linerel(7,-10);
    linerel(7,10);
    linerel(7,-10);
    linerel(7,10);
    linerel(7,-10);
    linerel(7,10);
    linerel(7,-10);
    linerel(7,10);
    linerel(7,-10);
    linerel(7,10);
    linerel(7,-10);
    linerel(7,10);
    linerel(7,-10);
    linerel(6,10);

    //lower square boxes small
    line(120,270,120,280);
    line(130,270,130,280);
    line(140,270,140,280);
    line(150,270,150,280);
    line(160,270,160,280);
    line(170,270,170,280);
    line(180,270,180,280);
    line(190,270,190,280);
    line(200,270,200,280);
    line(210,270,210,280);
    line(220,270,220,280);
    line(230,270,230,280);
    line(240,270,240,280);
    line(250,270,250,280);
    line(260,270,260,280);
    line(270,270,270,280);
    line(280,270,280,280);
    line(290,270,290,280);
    line(300,270,300,280);
    line(310,270,310,280);
    line(320,270,320,280);
    line(330,270,330,280);
    line(340,270,340,280);
    line(350,270,350,280);
    line(360,270,360,280);
    line(370,270,370,280);
    line(380,270,380,280);
    line(390,270,390,280);
    getch();
    closegraph();
}
