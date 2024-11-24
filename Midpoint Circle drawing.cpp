
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
    int p = 1-r;
    int Xplot = xc + x, Yplot = yc + y;
    cout<<"x y -> Xplot  Yplot"<<endl;
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
            p += 2 * x - 2 * y + 1;
        }

        cout<<x<<" "<<y<<" ->   ";

        Xplot = xc + x, Yplot = yc + y;

        cout<< Xplot <<"   "<< Yplot <<endl;

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

