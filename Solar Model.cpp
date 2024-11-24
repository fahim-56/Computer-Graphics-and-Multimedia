
#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGT");

    //Solar model
    for(int i=20; i<=100; i+=20)
    {
     circle(200,200,i);
    }

    getch();
    closegraph();
    return 0;
}
