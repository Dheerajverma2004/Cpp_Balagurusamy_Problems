#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex()
    {
        real = 0;
        imag = 0;
    }
    Complex(int x)
    {
        real = x;
        imag = x;
    }
    Complex(int x, int y)
    {
        real = x;
        imag = y;
    }
    void sum(Complex c1, Complex c2)
    {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }
    void display()
    {
        cout << real << "+i" << imag << endl;
    }
};

int main()
{
    Complex c1, c2(2), c3(3, 4), c4;
    c4.sum(c2, c3);
    cout << "c1: ";
    c1.display();
    cout << "c2: ";
    c2.display();
    cout << "c3: ";
    c3.display();
    cout << "c4: ";
    c4.display();
    return 0;
}
