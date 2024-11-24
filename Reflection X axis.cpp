
#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main(void)
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGT");

    cout<<"Enter x1,y1,x2,y2,x3,y3"<<endl;
    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;

    line(x1,y1,x2,y2);
    line(x1,y1,x3,y3);
    line(x3,y3,x2,y2);

    y1=-y1+300;
    y2=-y2+300;
    y3=-y3+300;

    line(x1,y1,x2,y2);
    line(x1,y1,x3,y3);
    line(x3,y3,x2,y2);


    getch();
    closegraph();
    return 0;
}
/*
100 100
200 100
150 50
*/
