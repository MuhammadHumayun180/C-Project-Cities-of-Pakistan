#include <conio.h>
#include <stdio.h>
#include <dos.h>
#include <graphics.h>
#include <stdlib.h>


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

     char key;
     FILE  *fp;

     fp=fopen("data.txt","rb");
     cleardevice();
     setcolor(11);
     //borders start
     setfillstyle(2,5);
     bar(3,3,637,477);
     setfillstyle(0,3);
     bar(20,20,622,463);
     setcolor(3);
     rectangle(2,2,638,478);
     setcolor(14);
     rectangle(19,19,623,464);
     //borders end
     //upper headings

     setcolor(11);
     settextstyle(11,0,1);
     outtextxy(60,70, "CITIES");
     setcolor(4);
     line(143,57,143,463);
     line(146,57,146,463);
     setcolor(11);
     outtextxy(185,70, "FOODS");
     setcolor(4);
     line(279,57,279,463);
     line(276,57,276,463);
     setcolor(11);
     outtextxy(330,70, "PLACES");
     setcolor(4);
     line(425,57,425,463);
     line(422,57,422,463);
     setcolor(11);
     outtextxy(460,70, "AREA");
     setcolor(4);
     line(524,57,524,463);
     line(527,57,527,463);
     setcolor(11);
     outtextxy(535,70, "POPULATIONS");
     setcolor(12);
     //horizontal lines 1st

     line(20,60,622,60);
     line(20,57,622,57);
     //horizontal lines 2nd
     line(20,83,622,83);
     line(20,86,622,86);
     //main heading
     setcolor(14);
     settextstyle(10,0,2);
     outtextxy(135,12, "DISPLAY ALL RECORDS");
     int y=10;
     while(   fread(&cop,sizeof(cop),1,fp) !=NULL)
     {        y+=20;
       settextstyle(11,0,1);
       setcolor(3);

       outtextxy(21,60+y,cop.city);
       setcolor(3);
       outtextxy(147,60+y,cop.food);
       setcolor(3);
       outtextxy(282,60+y,cop.place);
       setcolor(3);
       outtextxy(427,60+y,cop.area);
       setcolor(3);
       outtextxy(530,60+y,cop.population);


     }
      fclose(fp);
      getche();
}