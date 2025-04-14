#include <graphics.h>
#include <conio.h>

int main() {
    initwindow(800, 400, "Shahanawas Ali Shuvo");

    setbkcolor(WHITE);
    cleardevice();

    // Define ORANGE as RGB manually (if supported), else use LIGHTRED
    int orange = COLOR(255, 165, 0); // if COLOR() is supported
    setcolor(orange);
    setfillstyle(SOLID_FILL, orange);

    // Draw square
    rectangle(100, 100, 200, 200);
    floodfill(150, 150, orange);

    // Draw obtuse triangle
    int tri[] = {250, 100, 400, 150, 250, 200, 250, 100};
    fillpoly(4, tri);

    // Wait for 'S' or 's' key press to close
    while (true) {
        char ch = getch();
        if (ch == 'S' || ch == 's') {
            break;
        }
    }

    closegraph();
    return 0;
}

