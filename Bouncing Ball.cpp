
#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    int ball_x = getmaxx() / 2;  // Set ball's x-coordinate at the center
    int ball_y = 50;             // Set initial ball's y-coordinate
    int ball_radius = 20;        // Radius of the ball
    int speed = 5;               // Speed of the ball
    int direction = 1;           // 1 for down, -1 for up
    int color_index = 1;         // Color index for the ball

    // Bouncing counter
    int bounces = 0;
    int max_bounces = 10;  // Stop the ball after 10 bounces

    // Animation loop
    while (true) {
        // Clear the previous position
        cleardevice();

        // Draw the ball
        setcolor(color_index);
        circle(ball_x, ball_y, ball_radius);
        setfillstyle(SOLID_FILL,color_index);
        floodfill(ball_x, ball_y, color_index);  // Fill the ball with the same color

        // Update the ball's position
        ball_y += speed * direction;

        // Change direction if the ball hits top or bottom boundary
        if (ball_y + ball_radius >= getmaxy() || ball_y - ball_radius <= 0) {
            direction = -direction;
            color_index = (color_index % 15) + 1;  // Change color with each bounce
            bounces++;  // Increment the bounce counter
        }

        // Delay to slow down the movement for visibility
        delay(10);

        // Stop condition: Break if max bounces reached or a key is pressed
        if (bounces >= max_bounces || kbhit()) {
            break;
        }
    }

    getch();  // Wait for any key press to exit
    closegraph();
    return 0;
}
