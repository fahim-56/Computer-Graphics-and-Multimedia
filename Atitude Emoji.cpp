#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGT");


    // Emoji vab
    setcolor(YELLOW);
    circle(200,200,100);
    circle(170,170,20);
    circle(230,170,20);
    arc(200,200,200,300,50);
    line(250,170,285,155);
    line(150,170,115,155);
    line(190,170,210,170);

    getch();
    closegraph();
    return 0;
}
