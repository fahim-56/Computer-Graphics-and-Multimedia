
#include<bits/stdc++.h>
#include <graphics.h>
#include <conio.h>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    cout<<"Enter x1,y1:"<<endl;

    int x1,y1;
    cin>>x1>>y1;

    cout<<"Enter x2,y2:"<<endl;

    int x2,y2;
    cin>>x2>>y2;

int x11=x1,x22=x2,y11=y1,y22=y2;
    int dx=x2-x1;
    int dy=y2-y1;


    int p=(2*dy)-dx;

    while( x1<x2 || y1<y2)
    {


        if(p<0)
        {

            x1=x1+1;
            p=p+(2*dy);
        }
        else
        {
            x1+=1;
            y1+=1;
            p=p+(2*dy)-(2*dx);
        }

        putpixel(x1,y1,WHITE);
        cout<<x1<<" "<<y1<<endl;

    }

    x1=x11;
    x2=x22;
    y1=y11;
    y2=y22;
    dx=x2-x1;
    dy=y2-y1;


    p=(2*dy)-dx;

    while( x1<x2 || y1<y2)
    {

        if(p<0)
        {

            x1=x1+1;
            p=p+(2*dy);
        }
        else
        {
            x1+=1;
            y1+=1;
            p=p+(2*dy)-(2*dx);
        }

        delay(200);
        rectangle(x1+10,y1+20,x2+15,y2+25);
        cleardevice();
    circle(x1,y1,10);
    }

    getch();
    closegraph();
    return 0;
}
