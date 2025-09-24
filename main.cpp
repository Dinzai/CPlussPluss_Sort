
#include "Sort.h"

//Brett Rogers

//Basic array looping/recursion Practice



int main()
{
    Search look;
    int arr[] = {1,2,3,4,5};
    int length = sizeof(arr) / sizeof(arr[0]);
    int count = 0;

    std::cout << "Searching linearly" << '\n';
    look.LoopLinear(arr, length);

    std::cout << "Searching Recursivly" << '\n';   
    look.LoopRecursive(arr, length, count);
}