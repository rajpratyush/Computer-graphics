

#include <graphics.h>
#include <stdio.h>  
#include <conio.h>  
  
  
    void CirclePlot(int xc,int yc,int x,int y)  
   {  
    putpixel(x+xc,y+yc,RED);  
    putpixel(x+xc,-y+yc,RED);  
    putpixel(-x+xc,-y+yc,RED);  
    putpixel(-x+xc,y+yc,RED);  
    putpixel(y+xc,x+yc,RED);  
    putpixel(y+xc,-x+yc,RED);  
    putpixel(-y+xc,-x+yc,RED);  
    putpixel(-y+xc,x+yc,RED);  
   }  
  
    void BresenhamCircle(int xc,int yc,int r)  
   {  
    int x=0,y=r,d=3-(2*r);  
    CirclePlot(xc,yc,x,y);  
  
    while(x<=y)  
     {
      if(d<0)
	     {
	d=d+(4*x)+6;
      }
     else
      {
	d=d+(4*x)-(4*y)+10;
	y=y-1;
      }
       x=x+1;
       CirclePlot(xc,yc,x,y);
      }
    }

    void  main()
   {

    int xc,yc,r,gd = DETECT, gm;

     initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");   
       printf("Enter the values of xc and yc :");  
       scanf("%d%d",&xc,&yc);  
       printf("Enter the value of radius  :");  
       scanf("%d",&r);  
       BresenhamCircle(xc,yc,r);  
  
     getch();  
     closegraph();  
       
    }  