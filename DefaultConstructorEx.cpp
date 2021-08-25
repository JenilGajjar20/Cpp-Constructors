#include <iostream>
using namespace std;

class Complex
{
    // Private Modifiers
    int a, b;

    // Public Modifiers
public:
    // Creating a Constructor
    Complex(void); // Constructor Declaration

    void printNumbers()
    {
        cout << "Complex number is: " << a << " + " << b << "i\n";
    }
};

// Default Constructor
Complex ::Complex(void)
{
    a = 10;
    b = 15;
}

int main()
{
    // Creating an object
    Complex c;        // c is an object of class Complex
    c.printNumbers(); // print the complex number
    return 0;
}