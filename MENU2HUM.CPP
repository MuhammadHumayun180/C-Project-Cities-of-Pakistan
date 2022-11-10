#include <conio.h>
#include <stdio.h>
#include <dos.h>
#include <graphics.h>
#include <stdlib.h>


void main()
{


      char key;


     int d,m;
     d=VGA;
     m=VGAHI;
     initgraph(&d , &m ,"c:\\tc\\bgi");

while(1)

{


     setfillstyle(2,14);
     bar(1,1,639,479);
     setfillstyle(4,0);
     bar(15,1,625,480);
     setlinestyle(4,2,4);
     setcolor(1);
     circle(320,240,238);
     setcolor(11);
     setlinestyle(2,1,1);
     line(15,230,81,230);
     line(15,250,81,250);
     line(558,230,625,230);
     line(558,250,625,250);
     //triangle
     setlinestyle(0,1,1);
     line(320,2,115,360);
     line(320,2,525,358);
     line(115,360,525,358);
     //text entry
     setcolor(14);
     settextstyle(10,0,1);
     outtextxy(271,60, " MENU " );
     outtextxy(271,62, " MENU " );
     settextstyle(11,0,1);

     outtextxy(245,125, " 1. ADD NEW RECORD " );
     outtextxy(230,155, " 2. DISPLAY ALL RECORD " );
     outtextxy(250,185, " 3. SEARCH RECORD " );
     outtextxy(250,215, " 4. DELETE RECORD " );
     outtextxy(250,245, " 5. EDIT RECORD " );
     outtextxy(250,275, " 6. PRINT RECORD " );
     outtextxy(225,305, " 7. EXIT FROM PROGRAM " );
     settextstyle(4,0,1);
     outtextxy(263,90, " !=======! " );
     setcolor(12);
     outtextxy(140,305, "**************************************************** " );
     outtextxy(132,315, "****************************************************** " );
     outtextxy(128,325, "******************************************************* " );
     outtextxy(121,335, "********************************************************* " );
     setcolor(4);
     settextstyle(11,0,1);
     outtextxy(152,390, "CHOOSE ANY OPTION FROM 1 TO 7 TO CONTINUE:");

   key=getche();
   if (key=='1')
      system("addhumay.exe");
   else if (key=='2')
      system("dispallh.exe");
   else if (key=='3')
      system("findhuma.exe");
   else if (key=='4')
     system("deletehu.exe");
  else if (key=='5')
      system("edithuma.exe");
  // else if (key=='6')
    //  system();
   if (key=='7')
      exit(0);
  }

}