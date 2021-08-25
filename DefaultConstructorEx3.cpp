#include <iostream>
using namespace std;

class Simple
{
    // Private Modifiers
    int a, b, c;

public:
    // Creating a Constructor
    Simple(int x, int y = 5, int z = 7) // y and z has the default values(Default Constructor).
    {
        a = x;
        b = y;
        c = z;
    }

    void printNumbers();
};

void Simple ::printNumbers()
{
    cout << "Value of a, b and c is: " << a << ", " << b << " and " << c << ".\n";
}

int main()
{
    Simple s(2); // Value of y and z will be considered as default value.
    // Simple s(2, 4); // Value of y will get replaced by '4' and value of z will be considered as default value.
    // Simple s(2, 4, 8); // Value of y and z will get replaced by '4' and '8'.
    s.printNumbers();
    return 0;
}