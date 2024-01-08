#include <bits/stdc++.h>
using namespace std;
bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2)
{
    // nearest point on rectangle from center of circle
    int xn = max(x1, min(x2, xCenter));
    int yn = max(y1, min(y2, yCenter));

    int dx = xn - xCenter;
    int dy = yn - yCenter;

    return (dx * dx) + (dy * dy) <= radius * radius;
}
int main()
{
    int R = 1;
    int Xc = 0, Yc = 0;
    int X1 = 1, Y1 = -1;
    int X2 = 3, Y2 = 1;

    if (checkOverlap(R, Xc, Yc,
                     X1, Y1,
                     X2, Y2))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False";
    }
}