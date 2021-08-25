#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    int a, b;

    friend void distanceBetweenPoints(Point, Point);

public:
    Point(int x, int y)
    {
        a = x;
        b = y;
    }

    void displayPoint()
    {
        cout << "The point is (" << a << ", " << b << ")\n";
    }
};

// Distance between two points
void distanceBetweenPoints(Point obj1, Point obj2)
{
    int distance = sqrt(pow(obj2.a - obj1.a, 2) + pow(obj2.b - obj1.b, 2));
    cout << "Distance between point is: " << distance;
}

int main()
{
    Point p(5, 4);
    p.displayPoint();

    Point q(10, 10);
    q.displayPoint();

    distanceBetweenPoints(p, q);
    return 0;
}