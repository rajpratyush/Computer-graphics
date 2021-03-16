#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void main()
{
int gd=DETECT,gm,i=0,a=0;
float r=20;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI\\");

for(i=1;i<100;i++)
 {
 if(a!=i/15)
  delay(300);
 a=i/15;
 setcolor(a);
 arc(200,150,10,170,r+i);
 }
getch();
}