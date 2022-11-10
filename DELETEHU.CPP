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
     FILE  *fp,*fp1;




 while(1)
 {
	  cleardevice();
     //borders start
     setlinestyle(1,3,3);
     setfillstyle(10,3);
     bar(3,3,637,477);
     setfillstyle(0,3);
     bar(18,18,622,463);
     setcolor(11);
     rectangle(2,2,638,478);
     setcolor(14);
     rectangle(19,19,623,464);
     setlinestyle(3,2,2);
     setcolor(11);
     ellipse(320,242,1,360,300,200);
     setlinestyle(2,1,1);
     setcolor(14);
     line(20,20,104,104);
     line(620,20,537,103);
     line(20,463,90,370);
     line(620,460,540,380);
     setlinestyle(0,1,1);
      line(300,22,300,42);
      line(320,22,320,42);
      line(300,465,300,442);
       line(320,465,320,442);
     //borders end

	  settextstyle(10,0,3);
	  setcolor(11);
	  outtextxy(112,90,"DELETE CITIES RECORD");
	  outtextxy(112,91,"DELETE CITIES RECORD");
	  setlinestyle(0,1,1);
	  line(62,140,577,140);
	  line(60,143,580,143);
	  setlinestyle(1,3,3);
	  setcolor(3);
	  line(20,233,620,233);
	  line(20,257,620,257);
	  settextstyle(8,0,1);
	  setcolor(14);
	  outtextxy(25,230,"ENTER CITY NAME TO DELETE RECORD :");
	  getinput(426,235,shaher,7,4,1);
	  fp=fopen("data.txt","rb");
	  fp1=fopen("dummy.txt","wb");

	  while(fread(&cop,sizeof(cop),1,fp)!=NULL)
	  {
	    if(strcmp(cop.city,shaher) !=0)
	     {
		fwrite(&cop,sizeof(cop),1,fp1);
	     }
	       else
	     {
		 f=1;
	     }
	  }
	       if(f==0)
	       {

		  outtextxy(250,400, " RECORD IS NO FOUND");

		}


	      fclose(fp);fclose(fp1);
	      setlinestyle(1,3,3);
	      line(70,353,570,353);
	      settextstyle(1,0,1);
	      setcolor(12);
	      outtextxy(95,353,"DO YOU WANT TO DELETE ANOTHER RECORD [Y/N]");

	      key=getche();
	      remove("data.txt");
	      rename("dummy.txt","data.txt");


	      if (key=='y'|| key=='Y')
		continue;
	      else
		break;

  }

}
