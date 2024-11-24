
#include <bits/stdc++.h>
#include <graphics.h>
#include <conio.h>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C\\T)C\\BGI");
    line(90, 270, 210, 90);
    line(180, 300, 210, 90);
    line(360, 270, 210, 90);
    line(240, 240, 210, 90);
    line(90, 270, 180, 300);
    line(90, 270, 240, 240);
    line(240, 240, 360, 270);
    line(360, 270, 180, 300);
    getch();
    closegraph();

    return 0;
}
