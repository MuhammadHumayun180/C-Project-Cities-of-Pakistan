
#include <conio.h>
#include <stdio.h>
#include <dos.h>
#include <graphics.h>
#include <stdlib.h>
#include <string.h>




void getinput(int x,int y,char str[],int font,int color,int size)
{
     char key;
     int i=0;
     setcolor(color);
     settextstyle(font,0,size);

     while(1)
     {
	  key =getch();
	  if (key==13)
	  {
	      str[i+1]='\0';
	      break;
	  }
	  str[i]=key;
	  str[i+1]='\0';
	  setfillstyle(1,0);
	  bar(x,y,x+1,y+1);
	  moveto(x,y);
	  outtext(str);
	  i++;
     }

 }





void main()
{



     int d,m;
     d=VGA;
     m=VGAHI;
     initgraph(&d , &m ,"c:\\tc\\bgi");

      struct cities_of_pakistan
       {
	  char city[20];
	  char food[20];
	  char place[20];
	  char area[20];
	  char population[20];

	}cop;

	   char key;

       FILE *fp;

       fp=fopen("data.txt" , "ab");




       while(1)
       {
	  cleardevice();
	  //borders start
	  setfillstyle(2,11);
	  bar(4,4,635,475);
	  setfillstyle(0,3);
	  bar(13,13,625,464);
	  setcolor(1);
	  setlinestyle(3,3,3);
	  rectangle(1,1,636,476);
	  setcolor(12);
	  setlinestyle(8,6,8);
	  rectangle(14,14,624,463);
	  //borders end
	  //lines between matter start
	   setcolor(11);
	   setlinestyle(3,2,2);
	   line(15,122,617,122);
	   line(15,165,617,165);
	   setcolor(14);
	   line(15,175,617,175);
	   line(15,215,617,215);
	   setcolor(13);
	   line(15,225,617,225);
	   line(15,265,617,265);
	   setcolor(1);
	   line(15,275,617,275);
	   line(15,315,617,315);
	   setcolor(7);
	   line(15,325,617,325);
	   line(15,365,617,365);
	   //lines between matter end
	   //end heading line start
	   setcolor(4);
	   setlinestyle(3,1,3);
	   line(15,415,617,415);
	   line(15,450,617,450);
	   //end heading line end
	   // main heading start
	   setcolor(1);
	   settextstyle(4,0,6);
	   outtextxy(60,40,"A");
	   setcolor(2);
	   outtextxy(100,40,"D");
	   setcolor(3);
	   outtextxy(135,40,"D");
	   setcolor(4);
	   outtextxy(205,40,"N");
	   setcolor(5);
	   outtextxy(245,40,"E");
	   setcolor(6);
	   outtextxy(280,40,"W");
	   setcolor(7);
	   outtextxy(355,40,"R");
	   setcolor(8);
	   outtextxy(393,40,"E");
	   setcolor(9);
	   outtextxy(430,40,"C");
	   setcolor(10);
	   outtextxy(465,40,"O");
	   setcolor(11);
	   outtextxy(503,40,"R");
	   setcolor(14);
	   outtextxy(540,40,"D");
	  //matter under border start
	  settextstyle(10,0,1);
	  setcolor(3);
	  outtextxy(30,120, "ENTER CITY NAME :");
	  getinput(316,132,cop.city,7,3,3);
	  settextstyle(10,0,1);
	  setcolor(14);
	  outtextxy(30,170, "ENTER FOOD NAME :");
	  getinput(321,183,cop.food,7,14,3);
	  settextstyle(10,0,1);
	  setcolor(13);
	  outtextxy(30,220, "ENTER PLACE NAME :");
	  getinput(342,233,cop.place,7,13,3);
	  settextstyle(10,0,1);
	  setcolor(1);
	  outtextxy(30,270, "ENTER AREA :");
	  getinput(235,283,cop.area,7,1,3);
	  settextstyle(10,0,1);
	  setcolor(7);
	  outtextxy(30,320, "ENTER POPULATION :");
	  getinput(335,333,cop.population,7,7,3);

	  //matter under border end
	  //matter lines



	  fwrite(&cop,sizeof(cop),1,fp);
	  setcolor(4);
	  settextstyle(1,0,3);
	  outtextxy(180,420, "ADD MORE RECORD [Y/N]");


	  key=getche();
	  if(key=='y' || key=='Y')
	     continue;
	     else
		 break;

	     }



}













