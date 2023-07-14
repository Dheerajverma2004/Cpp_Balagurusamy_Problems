#include <iostream>
using namespace std;

class A
{
    
    int a,b;

    public:
    A(int a, int b)
    {
        this->a=a;   this->b=b;
    }
    void show_data()
    {
        cout << a <<" " << b << endl;
    }
    
};

int main()
{
    A obj(45,56);
    obj.show_data();
    return 0;
}