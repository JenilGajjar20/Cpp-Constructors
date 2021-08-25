#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Default Constructor
    Complex()
    {
        a = 0;
        b = 0;
    }

    // Parameterized Constructor with two arguments
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    // Parameterized Constructor with single argument
    Complex(int x)
    {
        a = x;
        b = 0;
    }

    void printNumbers()
    {
        cout << "Complex number: " << a << " + " << b << "i\n";
    }
};

int main()
{
    Complex c1(4, 5); // Parameterized Constructor with two arguments
    c1.printNumbers();

    Complex c2(5); // Parameterized Constructor with single argument
    c2.printNumbers();

    Complex c3; // Default Constructor
    c3.printNumbers();
    return 0;
}