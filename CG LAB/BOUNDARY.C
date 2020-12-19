// C Implementation for Boundary Filling Algorithm 
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
// Function for 4 connected Pixels
void boundaryfill(int x,int y,int f_color,int b_color)
{
if(getpixel(x,y)!=b_color && getpixel(x,y)!=f_color)
{
putpixel(x,y,f_color);
boundaryfill(x+1,y,f_color,b_color);
boundaryfill(x,y+1,f_color,b_color);
boundaryfill(x-1,y,f_color,b_color);
boundaryfill(x,y-1,f_color,b_color);
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
boundaryfill(x,y,4,15);
delay(100);
getch();
closegraph();
return 0;
}