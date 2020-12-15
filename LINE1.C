#include <graphics.h>
#include <conio.h>

int main()
{
int gd = DETECT, gm; //gd is for grphics driver
// gm is for graphics mode
// DETECT is a the name of a Macro used for
// initializing the graphics system
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
// FIRST argument IS THE ADDRESS OF GRAPHICS DRIVER
// SECOND argument IS THE ADDRESS OF THE GRAPHICS MODE
// THIRD argument IS THE PATH OF BGI LIBRARY
// (PATH WHERE YOU HAVE INSTALLED THE TURBO C)
//drawing a line
// requires four arguments x1, y1, x2, y2
// x1, y1 is the co ordinate of starting point
// x2, y2 is the co ordinate of ending point
// line(40,200,40,400);
// circle(200, 200, 100);
// function to draw a circle
// three arguments are required
// first two arguments are coordinate of centre point x and y
// and third argument is the radius of the circle
// by default top left corner is treated as 0, 0.
setbkcolor(2);
rectangle(20,20,80,120);
// function to draw a rectangle
// four arguments are required
// left top right bottom
getch();
closegraph();
return 0;
}




