
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

    x1=-x1+400;
    x2=-x2+400;
    x3=-x3+400;

    line(x1,y1,x2,y2);
    line(x1,y1,x3,y3);
    line(x3,y3,x2,y2);


    getch();
    closegraph();
    return 0;
}
/*
50 100
100 50
100 150
*/
