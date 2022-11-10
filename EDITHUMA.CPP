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
	  if(key==13 && i==0)
	  {
	      return;
	  }
	  if (key==13 && i!=0)
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
     FILE  *fp,*fp1;




  while(1)
  {
      fp=fopen("data.txt","rb");
     fp1=fopen("dumy.txt","wb");
     cleardevice();
      //1st bar

   setfillstyle(3,5);
   bar(1,1,640,480);
   //2nd bar for data entry
   setfillstyle(1,0);
   bar(25,25,615,455);

   //boundry of 1st bar
   setcolor(13);
   setlinestyle(1,3,3);
   rectangle(2,2,638,478);
   //boundry of 2nd bar
   setcolor(13);
   setlinestyle(1,3,3);
   rectangle(24,24,614,454);
   setcolor(4),
    setlinestyle(1,1,1);
 //  ellipse(320,240,1,360,293,213),

     f=0;
     setcolor(4);
     setlinestyle(1,3,3);
     line(23,103,612,103);
     line(23,104,612,104);
     line(23,105,612,105);
     line(23,106,612,106);
     line(23,107,612,107);
     line(23,108,612,108);
     line(23,109,612,109);
     line(23,110,612,110);
     line(23,111,612,111);
     line(23,112,612,112);
     line(23,113,612,113);
     line(23,114,612,114);


     setcolor(4);
     settextstyle(10,0,3);
     outtextxy(85,34,"EDIT CITIES INFORMATION");
     outtextxy(85,36,"EDIT CITIES INFORMATION");
     setcolor(4);
     settextstyle(11,0,5);
      outtextxy(130,132,"ENTER CITY NAME FOR EDIT INFORMATION :")     ;
      getinput(450,132,shaher,11,4,1);

     while(   fread(&cop,sizeof(cop),1,fp) !=NULL)
     {
	if (strcmp(shaher,cop.city)==0)
	{
	    //line code start
	    setcolor(11);
	    setlinestyle(2,1,1);
	     line(23,155,612,155);
	      line(23,177,612,177);
	      line(23,200,612,200);
	      line(23,222,612,222);
	      line(23,245,612,245);
	      line(23,267,612,267);
	      line(23,290,612,290);
	      line(23,312,612,312);
	      line(23,335,612,335);
	      line(23,357,612,357);
	      // line code end
	    settextstyle(7,0,3);
	    setcolor(5);
	    outtextxy(29,150,"CITY NAME IS :");
	    outtextxy(29,195,"CITY'S FAMOUS FOOD IS :");
	    outtextxy(29,240,"CITY'S FAMOUS PLACE IS :");
	    outtextxy(29,285,"CITY'S AREA IS :");
	    outtextxy(29,330,"CITY'S POPULATION IS :");
	    setcolor(13);
	    settextstyle(1,0,3);
	    outtextxy(230,151,cop.city);
	    outtextxy(348,196,cop.food);
	    outtextxy(365,241,cop.place);
	    outtextxy(240,286,cop.area);
	    outtextxy(332,331,cop.population);
	    setfillstyle(1,16);
	    bar(345,202,611,220);
	    getinput(348,196,cop.food,1,13,3);
	    setfillstyle(1,16);
	    bar(363,248,611,265);
	    getinput(365,241,cop.place,1,13,3);
	    setfillstyle(1,16);
	    bar(239,293,611,310);
	    getinput(240,286,cop.area,1,13,3);
	    setfillstyle(1,16);
	    bar(329,337,611,356);
	    getinput(332,331,cop.population,1,13,3);
	    fwrite(&cop,sizeof(cop),1,fp1);
	    f=1;
	    break;
	  }
	  else
	  {
	     fwrite(&cop,sizeof(cop),1,fp1);
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



       fclose(fp);
       fclose(fp1);
       remove("data.txt");
       rename("dumy.txt","data.txt");
	settextstyle(1,0,2);

	setcolor(4);
	setlinestyle(1,3,3);
	line(23,405,612,405);
	setcolor(11);
	outtextxy(155,415,"  EDIT ANOTHER CITY [Y/N]");
	key=getche();
	if (key=='y' || key=='Y')
	   continue;
     else
	  break;

     }

}

