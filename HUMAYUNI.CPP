#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include <graphics.h>

void main()

{
   int d,m;
   d=VGA;
   m=VGAHI;

   initgraph(&d,&m,"c:\\tc\\bgi");
   //1st bar
   setfillstyle(2,1);
   bar(1,1,640,480);
   //2nd bar for data entry
   setfillstyle(1,0);
   bar(25,25,615,455);

   //boundry of 1st bar
   setcolor(14);
   setlinestyle(3,5,3);
   rectangle(2,2,638,478);
   //boundry of 2nd bar
   setcolor(11);
   setlinestyle(3,2,5);
   rectangle(24,24,614,454);

   // Matter under the 2nd bar);
   //1st heading code start
   setfillstyle(2,8);
   bar(50,30,590,80);
   setcolor(14);
   setlinestyle(1,2,3);
   rectangle(51,31,591,81);
   setcolor(12);
   settextstyle(10,0,1);
   outtextxy(55,30, "ALIGARH INSTITUTE OF TECHNOLOGY");
   //1st heading code end
   //2nd heading code start
   setfillstyle(5,6);
   bar(71,112,553,140);
   setcolor(11);
   setlinestyle(1,1,4),
   rectangle(72,113,554,141);
   setcolor(11);
   settextstyle(7,0,3);
   outtextxy(73,110, "PROJECT TITLE: CITIES OF PAKISTAN ");
   //2nd heading code end
   //3rd heading code start


   setcolor(11);
   setlinestyle(3,1,3);
   rectangle(37,184,318,215);
   setcolor(15);
   settextstyle(4,0,4);
   outtextxy(45,180, "ADVISOR NAME : ");
   //3rd heading code end
   //4th heading code start


   setcolor(11);
   setlinestyle(3,1,3);
   rectangle(350,184,585,215);
   setcolor(15);
   outtextxy(360,180, "SIR MASOOD");
   //4th heading code end
   //5th heading code start
   setfillstyle(11,1);
   bar(125,244,518,280);
   setcolor(11);
   setlinestyle(1,2,3);
   rectangle(126,245,519,281);
   settextstyle(8,0,5);
   setcolor(9);
   outtextxy(130,230, "GROUP MEMBERS:");
   //5th headig code end
   //6th headig code start
   settextstyle(7,0,1);
   setcolor(14);
   outtextxy(30,300, "* MIRZA AYYAN BAIG");
   //6th heading code end
   //7th heading code start
   settextstyle(7,0,1);
   setcolor(14);
   outtextxy(30,420, "* M. HAMZA ALI");
   //7th heading code end
   //8th heading code start
    settextstyle(7,0,1);
   setcolor(14);
   outtextxy(430,300, "* OSAMA TARIQ");
   //8th heading code end
   //9th heading code start
    settextstyle(7,0,1);
   setcolor(14);
   outtextxy(435,420, "* M. SARIM");
   //9th heading code end
   //10th heading code start
     settextstyle(7,0,1);
   setcolor(14);
   outtextxy(200,370, "* M. HUMAYUN SAEED");
   sleep(3);
   system("menu2hum.exe");


 }