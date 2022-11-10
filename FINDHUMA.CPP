#include <conio.h>
#include <stdio.h>
#include <dos.h>
#include <graphics.h>
#include <stdlib.h>
#include<string.h>


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

      } cop;

     char key,f,shaher[20];
     FILE  *fp;

     fp=fopen("data.txt","rb");



  while(1)
  {

     cleardevice();
      //1st bar

   setfillstyle(10,11);
   bar(1,1,640,480);
   //2nd bar for data entry
   setfillstyle(1,0);
   bar(25,25,615,455);

   //boundry of 1st bar
   setcolor(14);
   setlinestyle(1,3,3);
   rectangle(2,2,638,478);
   //boundry of 2nd bar
   setcolor(11);
   setlinestyle(1,3,3);
   rectangle(24,24,614,454);
   setcolor(4),
    setlinestyle(1,1,1);
   ellipse(320,240,1,360,293,213),

     f=0;
     setcolor(9);
     setlinestyle(1,3,3);
     line(96,103,543,103);
     line(96,104,543,104);
     line(96,105,543,105);
     line(96,106,543,106);
     line(96,107,543,107);
     line(96,108,543,108);
     line(96,109,543,109);
     line(96,110,543,110);
     line(96,111,543,111);
     line(96,112,543,112);
     line(96,113,543,113);
     line(96,114,543,114);


     setcolor(9);
     settextstyle(10,0,4);
     outtextxy(180,38,"FIND CITIES");
     outtextxy(180,39,"FIND CITIES");
     setcolor(9);
     settextstyle(11,0,5);
      outtextxy(130,132,"ENTER CITY NAME FOR SEARCH INFORMATION :")     ;
      getinput(450,132,shaher,11,9,1);

     while(   fread(&cop,sizeof(cop),1,fp) !=NULL)
     {
	if (strcmp(shaher,cop.city)==0)
	{
	    //line code start
	    setcolor(12);
	      line(50,155,589,155);
	      line(40,177,595,177);
	      line(30,200,606,200);
	      line(25,222,612,222);
	      line(25,245,613,245);
	      line(28,267,607,267);
	      line(34,290,605,290);
	      line(43,312,595,312);
	      line(55,335,583,335);
	      line(73,357,565,357);
	      // line code end
	    settextstyle(7,0,3);
	    setcolor(11);
	    outtextxy(50,150,"CITY NAME IS :");
	    outtextxy(33,195,"CITY'S FAMOUS FOOD IS :");
	    outtextxy(31,240,"CITY'S FAMOUS PLACE IS :");
	    outtextxy(44,285,"CITY'S AREA IS :");
	    outtextxy(74,330,"CITY'S POPULATION IS :");
	    setcolor(14);
	    settextstyle(1,0,3);
	    outtextxy(249,151,cop.city);
	    outtextxy(347,196,cop.food);
	    outtextxy(366,241,cop.place);
	    outtextxy(254,286,cop.area);
	    outtextxy(375,331,cop.population);
	    f=1;
	    break;
	  }
     }
     if(f==0)
       {
	  setcolor(4);
	  setlinestyle(1,3,3);
	  line(25,230,613,230);
	  line(26,264,612,264);
	  settextstyle(7,0,5);
	  setcolor(4);
	 outtextxy(45,220," YOUR CITY IS INVALID ");

       }


     rewind(fp);

	settextstyle(1,0,2);

	setcolor(4);
	setlinestyle(1,3,3);
	line(120,395,515,395);
	setcolor(11);
	outtextxy(155,400,"  SEARCH ANOTHER CITY [Y/N]");
	key=getche();
	if (key=='y' || key=='Y')
	   continue;
     else
	  break;

     }
      fclose(fp);



}

