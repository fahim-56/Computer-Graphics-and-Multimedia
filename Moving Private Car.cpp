
#include <bits/stdc++.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h> // for delay()

void drawCar(int x, int y) {
    // Clear previous drawing
    cleardevice();

    // Car body
    rectangle(x, y, x + 200, y + 50);
    setfillstyle(SOLID_FILL, BLUE);
    floodfill(x + 1, y + 1, WHITE);

    // Car roof
    rectangle(x + 50, y - 30, x + 150, y);
    setfillstyle(SOLID_FILL, BLUE);
    floodfill(x + 51, y - 29, WHITE);

    // Wheels
    circle(x + 50, y + 50, 20);
    floodfill(x + 50, y + 50, WHITE);
    circle(x + 150, y + 50, 20);
    floodfill(x + 150, y + 50, WHITE);
}

int main() {
    // Initialize graphics
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x = 0; // Starting position of the car
    int y = 300; // Y position of the car

    while (x < getmaxx()) { // Loop until the car moves off-screen
        drawCar(x, y); // Draw the car at the new position
        x += 5; // Move the car to the right
        delay(50); // Delay to control the speed of movement
    }

    // Wait for user input before closing
    getch();
    closegraph();
    return 0;
}
