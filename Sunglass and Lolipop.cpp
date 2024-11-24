#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGT");

    //Coshma
    circle(150,250,50);
    circle(250,250,50);
    line(300,255,450,200);
    line(150,200,280,160);

    //Lolipop
     setcolor(RED);
     circle(500,250,50);
     setcolor(GREEN);
     rectangle(490,300,510,450);



    getch();
    closegraph();
    return 0;
}
