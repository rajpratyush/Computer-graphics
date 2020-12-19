// C program for implementing 
// Mid-Point Circle Drawing Algorithm
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
// Implementing Mid-Point Circle Drawing Algorithm
void drawcircle(int x0, int y0, int radius)
{
int x = radius;
int y = 0;
int err = 0; 
while (x >= y)
{
putpixel(x0 + x, y0 + y, 7);
putpixel(x0 + y, y0 + x, 7);
putpixel(x0 - y, y0 + x, 7);
putpixel(x0 - x, y0 + y, 7);
putpixel(x0 - x, y0 - y, 7);
putpixel(x0 - y, y0 - x, 7);
putpixel(x0 + y, y0 - x, 7);
putpixel(x0 + x, y0 - y, 7);
// Mid-point is inside or on the perimeter 
if (err <= 0)
{
y += 1;
err += 2*y + 1;
}
// Mid-point is outside the perimeter
if (err > 0)
{
x -= 1;
err -= 2*x + 1;
}
}
}
//Driver Code
int main()
{
int gd=DETECT, gm, error, x, y, r;
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
printf("Enter radius of circle: ");
scanf("%d", &r);
printf("Enter co-ordinates of center(x and y): ");
scanf("%d%d", &x, &y);
clrscr();
drawcircle(x, y, r);
getch();
closegraph();
return 0;
}