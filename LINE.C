#include <graphics.h>
#include <conio.h>
 
int main()
{
   int gd = DETECT, gm;
 
   //initialing graphics
   initgraph(&gd, &gm, "C://TURBOC3//BGI");
   //draw a line

   /*
   line() function description
   parameter left to right
   x1: 100
   y1: 100
   x2: 200
   y2: 100
   */
   line(100,100,200,100);    //will draw a horizontal line

  // line(10,10,200,10); //will draw another horizontal line

   getch();
   closegraph();
   return 0;
   }