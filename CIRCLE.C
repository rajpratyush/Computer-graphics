#include<graphics.h>
#include<conio.h>
int main()
{
   int gd = DETECT, gm;

   initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

   circle(100, 100, 50);
   
   getch();
   closegraph();
   return 0;
}