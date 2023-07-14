#include <iostream>
#include <fstream> 
using namespace std;
int main()
{
   
    fstream myFile;
    myFile.open("file.txt", ios::out);
    if (myFile.is_open())
    {
        myFile << "namaste bharat!\n";
        myFile << "The ultimate projects has established its root in our proud nation.\n";
        myFile.close();
    }

    myFile.open("file.txt", ios::app);
    if (myFile.is_open()) 
    {
        myFile << "namaste bharat!\n";
        myFile << "Our nation is moving towards progess since last few years.\n";
        myFile.close();
    }

    myFile.open("file.txt", ios::app);
    if (myFile.is_open())
    {
        myFile << "namaste bharatvarsh!\n";
        myFile << "Our nation is moving towards progess since last few years and giving birth to many entrepreneurs .\n";
        myFile.close();
    }


fstream myFile1;
    myFile1.open("file1.txt", ios::out);
    if (myFile1.is_open())
    {
        myFile1 << "namaste bharat!\n";
        myFile1 << "The ultimate projects has established its root in our proud nation.\n";
        myFile1.close();
    }

    myFile1.open("file1.txt", ios::app);
    if (myFile1.is_open())
    {
        myFile1 << "namaste bharat!\n";
        myFile1 << "Our nation is moving towards progess since last few years.\n";
        myFile1.close();
    }

    myFile1.open("file1.txt", ios::app);
    if (myFile1.is_open())
    {
        myFile1 << "namaste bharatvarsh!\n";
        myFile1 << "Our nation is moving towards progess since last few years and giving birth to many entrepreneurs .\n";
        myFile1.close();
    }


    // fstream myFile;
    // myFile.open("file.txt", ios::in);
    // if (myFile.is_open())
    // {
    //     string line;
    //     while(getline(myFile , line)){
    //         cout << line << endl;
    //     }
    //     myfile.close();
    // }
    // return 0;

}