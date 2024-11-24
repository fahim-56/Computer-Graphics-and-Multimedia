
#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main(void)
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGT");
    int x1,y1,x2,y2;
    cout<<"Enter Two Point:"<<endl;
    cin>>x1>>y1>>x2>>y2;
    int dx,dy;
    dx=x2-x1;
    dy=y2-y1;
    int steps;
    if(abs(dx)>abs(dy))
    {
        steps=abs(dx);
    }
    else
    {
        steps=abs(dy);
    }

    float incX=(dx/(1.0 *steps));
    float incY=(dy/(1.0*steps));


    float x=x1*1.0;
    float y=y1*1.0;
    for(int i=0; i<=steps; i++)
    {
        putpixel(round(x),round(y),GREEN);
        cout<<fixed << setprecision(0) << x<<" "<<y<<endl;
        x+=incX;
        y+=incY;
    }

    x=x1*1.0;
    y=y1*1.0;
    for(int i=0; i<=steps; i++)
    {
        delay(10);
        putpixel(round(x),round(y),YELLOW);
        delay(100);
        putpixel(round(x),round(y),BLACK);
        x+=incX;
        y+=incY;
    }

    getch();
    closegraph();
    return 0;
}


