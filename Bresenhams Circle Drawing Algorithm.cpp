
#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int xc;
    int yc;
    int r;
    cout<<"Enter Center point xc,yc and radius r"<<endl;
    cin>>xc>>yc>>r;
    int x = 0;
    int y = r;
    int p = 3-(2*r);

    while (x < y)
    {
        x++;
        if (p < 0)
        {
            p += 2 * x + 1;
        }
        else
        {
            y--;
            p += 2 * (x - y) + 1;
        }
        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc - y, RED);
        putpixel(xc + y, yc + x, RED);
        putpixel(xc - y, yc + x, BLUE);
        putpixel(xc + y, yc - x, BLUE);
        putpixel(xc - y, yc - x, GREEN);
        putpixel(xc - x, yc + y, GREEN);
    }

    getch();
    closegraph();
    return 0;
}

