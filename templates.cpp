// //Templates
// #include<iostream>
// using namespace std;
// template <typename T>
// T maxmin(int arr[] , int size , int* min , int* max) 

// int main()
// {
//    return 0;
// }


/*
Write a genering function to find the max element  in a given array.
Test your function for integer array, float array, char array.
*/

#include <iostream>
using namespace std;

template <typename T>
void maximum (T arr1[] , int n)
{
    T m= arr1[0];
    int i;
    for(int i=0 ; i<n ;i++)
    {

        if(m < arr1[i])
            m= arr1[i];
    }
    cout << "maximum element is : " << m << endl;
    // return m;
}

int main()
{

    int arr2[5]={224,4353,2344,587,3445};
    maximum(arr2,5);

    return 0;
}
