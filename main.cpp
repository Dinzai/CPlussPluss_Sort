
#include <iostream>

//Brett Rogers

//Basic array looping/recursion Practice

void LoopLinear(int arr[], int length)
{
    for(int i = 0; i < length; i++)
    {
        std::cout << arr[i] << '\n';
    }
}

int* LoopRecursive(int arr[], int length, int count)
{
    int start = arr[count];
    int end = arr[length - 1];
    if(count >= end)
    {
        return arr;
    }
    else if(count < end)
    {
        std::cout << arr[count] << '\n';
        
    }
    return LoopRecursive(arr, length, count + 1);


}

int main()
{

    int arr[] = {1,2,3,4,5};
    int length = sizeof(arr) / sizeof(arr[0]);
    int count = 0;

    std::cout << "Searching linearly" << '\n';
    LoopLinear(arr, length);

    std::cout << "Searching Recursivly" << '\n';   
    LoopRecursive(arr, length, count);
}