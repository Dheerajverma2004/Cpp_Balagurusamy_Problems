// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=5;
//     int *ptr=&n;
//     * ptr=30;
//     cout << n << endl;
//     cout << &n << endl;

   
//     cout << ptr << endl;
//     cout << *ptr << endl;
//     *ptr =10;
//     cout << ptr << endl;
//     cout << *ptr << endl;
//     cout << n << endl;
//    return 0;
// }

// #include<iostream>
// using namespace std;

// void printnumber(int* number){
//     cout << *number << endl;
// }

// void printletter(char* charptr){
//     cout << *charptr << endl;
// }

// int main()
// {
//     int number=5;
//     char letter='a';

//     printnumber(&number );
//     printletter(&letter);

//    return 0;
// }

// #include<iostream>
// using namespace std;

// void getmin(int arr[], int size)
// {
//     int min=arr[0];
//     for (int i=0 ; i <size ; i++)
//     {
//         if (arr[i]< min)
//         {
//             min=arr[i];
//         }
//     }
//     cout << min << endl;

// }

// void getmax(int arr[], int size)
// {
//     int max=arr[0];
//     for (int i=0 ; i <size ; i++)
//     {
//         if (arr[i] > max)
//         {
//             max=arr[i];
//         }
//     }
//     cout << max << endl;

// }
// int main()
// {
//     int arr[5]={4,6,7,3,4};
//    cout << "min is:"; getmin(arr,5);
//    cout << "max is"; getmax(arr,5) ;

//    return 0;
// }

// #include<iostream>
// using namespace std;
// void getminmax(int arr[] , int size , int* min , int* max)
// {
//     for (int i = 0 ; i<size ; i++)
//     {
//         if(arr[i] > *max)
//         {
//             *max = arr[i];
//         }
//         if(arr[i]< *min)
//         {
//             *min= arr[i];
//         }
//     }
//     cout << "min:"  << *min  << endl;
//     cout << "max:"  << *max  << endl;
// }

// int main()
// {
//     int arr[5]={0,1,2,3,4};
//     int a=arr[0];
//     int b=arr[0];

//     getminmax(arr,5,&a,&b);
//     cout << "min:" << a << endl;
//     cout << "max:" << b << endl;

//    return 0;
// }


//dynamic array
// #include<iostream>
// using namespace std;
// int main()
// {
//     int size;
//     cout << "size:";
//     cin >> size;
//     cout << endl;

//     int* array = new int[size];
//     cout << "enter array elements:" ; 
//     for(int i=0; i < size; i++)
//     {
//         cin >> array[i];
//     }
//     for(int i=0 ; i <size ; i++)
//     {
//         cout << *(array + i) << " ";
//     }

//     delete[]array;
//    return 0;
// }

