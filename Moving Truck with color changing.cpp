
#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGT");
    rectangle(20,200,150,300);
    rectangle(150,240,220,300);
    circle(50,310,10);
    circle(180,310,10);
    int x=0;
    int j=3;
    for(int i=0; i<40; i++)
    {
        delay(200);
        cleardevice();

        setcolor(j);
        j++;
        x+=10;
        rectangle(20+x,200,150+x,300);
        rectangle(150+x,240,220+x,300);
        circle(50+x,310,10);
        circle(180+x,310,10);
        if(j==14)
        {
            j=2;
        }
    }

    getch();
    closegraph();
    return 0;
}
