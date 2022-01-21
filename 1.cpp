#include<graphics.h>
#include<stdio.h>

int main()
{
	initwindow(500,500);
	setcolor(RED);//use to set border color
	//line(210,400,400,400);
	setfillstyle(SOLID_FILL,BLUE);//HATCH_FILL;
	
	circle(200,200,51);
	floodfill(200,200,RED);//basically it controls the color of that solid ,that the color is inside the circle or outside.
	//one more thing about floodfill is it finds where the color is ,then its work .
	//floodfill(250,250,white);
	
	getch();
}
