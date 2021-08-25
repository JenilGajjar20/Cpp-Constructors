#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }

    Number(int num)
    {
        a = num;
    }

    /* When no copy constructor is found, compiler supplies its own copy constructor */
    Number(Number &obj)
    {
        cout << "\nCopy Constructor called!!";
        a = obj.a;
    }

    void display()
    {
        cout << "\nThe value is: " << a;
    }
};

int main()
{
    Number x, y, z(30), z2;
    x.display();
    y.display();
    z.display();

    Number z1(z); // Copy Constructor invoked!
    z1.display();

    z2 = z;        // Copy Constructor will not get invoked!
    Number z3 = z; // Copy Constructor invoked!
    return 0;
}