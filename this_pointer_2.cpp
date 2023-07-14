#include<iostream>
using namespace std;
class demo
{
    private:
    int a;
    public:
    void set_a(int a)
    {
        this->a=a;
    }
    int get_a()
    {
        return a;
    }
};
int main()
{
    int a;
    cin >> a;
    demo obj;
    obj.set_a(a);
    cout << obj.get_a();
   return 0;
}