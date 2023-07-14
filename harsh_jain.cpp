//operator overloading
#include<iostream>
using namespace std;
class rect{
    int a;
    int b;
    public:
    void setdata(){
        cin>>a;
        cin>>b;
    }

    rect operator+(rect s){
       rect temp;
       temp.a=a+s.a;
       temp.b=b+s.b;
       return temp;
    }
    void display(){
        cout<<a<<" "<<b<<endl;
    }
};

int main()
{
    rect r1;
    r1.setdata();
    rect r2;
    r2.setdata();
    rect r3;
    r3=r1+r2;
    r1.display();
    r2.display();
    r3.display();
    
   return 0;
}