#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Creating a Constructor
    Complex(int, int);

    void printNumbers()
    {
        cout << "Complex number is: " << a << " + " << b << "i\n";
    }
};

// Parameterized Constructor
Complex ::Complex(int x, int y)
{
    a = x;
    b = y;
}

int main()
{
    // Implicit Call
    Complex a(4, 6); // a is an object of class Complex that takes two parameters 4 and 6
    a.printNumbers();

    // Explicit Call
    Complex b = Complex(5, 8); // b is an object of class Complex that takes two parameters 5 and 8
    b.printNumbers();
    return 0;
}