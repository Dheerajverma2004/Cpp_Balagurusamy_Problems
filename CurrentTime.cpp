#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    time_t now = time(nullptr);
char* current_time = ctime(&now);
cout << "The current time is: " << current_time;
    return 0;
}