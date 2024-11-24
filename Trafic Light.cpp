
#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    int inc=0;
    rectangle(50,50,400,150);
    for(int i=2; i<7; i+=2)
    {
        delay(1000);

        cleardevice();
        rectangle(50,50,400,150);

        setcolor(i);
        circle(100+inc,100,50);
        setfillstyle(SOLID_FILL,i);
        floodfill(100+inc,100, i);
        inc+=100;
    }

    getch();
    closegraph();
    return 0;
}
