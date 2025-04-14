#include <graphics.h>
#include <conio.h>

int main() {
    initwindow(800, 400, "MD. Shahanawas Ali Shuvo");

    setbkcolor(WHITE);
    cleardevice();

    // Left triangle (blue)
    setcolor(BLUE);
    setfillstyle(SOLID_FILL, BLUE);
    int tri1[] = {200, 200, 300, 100, 300, 200, 200, 200};
    fillpoly(4, tri1);

    // Right triangle (green)
    setcolor(GREEN);
    setfillstyle(SOLID_FILL, GREEN);
    int tri2[] = {300, 100, 400, 200, 300, 200, 300, 100};
    fillpoly(4, tri2);

    getch(); // Wait for key to see result
    closegraph();
    return 0;
}

