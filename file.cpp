#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n ; char name[20];
    ofstream ofn;

    ofn.open("Pictures\file.txt");
    cout << "roll number and name:";
    cin >> n >> name ;
    ofn << n << name ;
    ofn.close();
}