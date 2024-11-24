#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    cout<<"Enter x1,y1,x2,y2 and angle:"<<endl;
    double x1,y1,x2,y2, angle;
    cin>>x1>>y1>>x2>>y2>>angle;
    angle = angle * (3.14159 / 180);


    double xp, yp;
    xp=(x2 * cos(angle)) + (y2 * sin(angle));
    yp=-(x2 * sin(angle)) + ( y2 * cos(angle));


    line(x1, y1, x2, y2);
    line(x1, y1, xp, yp);


    getch();
    closegraph();
    return 0;
}

// 100 100 200 100 30
// 100 100 200 100 -90
