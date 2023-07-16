#include<iostream>
#include<fstream>
#include<cstdio>
using namespace std;
int main()
{
    char name[10];
    int age;
    ofstream outf("student.data");
    cout << "Enter your name and age: ";
    cin >> name >> age ;
    outf << name << "\n";
    outf << age << "\n";
    outf.close();
    ifstream inf("student.data");
    inf >> name ;
    inf >> age ;
    cout << name << endl << age;
    inf.close();
   return 0;
}