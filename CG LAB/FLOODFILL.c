// C Implementation for Boundary Filling Algorithm 
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
// Function for 4 connected Pixels 
void floodFill(int x,int y,int oldcolor,int newcolor)
{
if(getpixel(x,y) == oldcolor)
{
putpixel(x,y,newcolor);
floodFill(x+1,y,oldcolor,newcolor);
floodFill(x,y+1,oldcolor,newcolor);
floodFill(x-1,y,oldcolor,newcolor);
floodFill(x,y-1,oldcolor,newcolor);
}
}
// getpixel(x,y) gives the color of specified pixel 
// Driver code 
int main()
{
int gm,gd=DETECT,radius;
int x,y;
printf("Enter x and y positions for circle\n");
scanf("%d%d",&x,&y);
printf("Enter radius of circle\n");
scanf("%d",&radius);
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
clrscr();
// circle function 
circle(x,y,radius);
// Function calling 
floodfill(x,y,4,15);
delay(100);
getch();
closegraph();
return 0;
}