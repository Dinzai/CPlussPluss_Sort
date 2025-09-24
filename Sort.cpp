#include "Sort.h"

int Search::GetLength(int arr[])
{
    int length = sizeof(arr); // sizeof(arr[0]);
    return length;
}

void Search::LoopLinear(int arr[], int length)
{
    for(int i = 0; i < length; i++)
    {
        std::cout << arr[i] << '\n';
    }
}

int* Search::LoopRecursive(int arr[], int length, int count)
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

void Sort::Swap(int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp; 
}

int* Sort::BubbleSort(int arr[], int start)
{
    //find base case
    //if(arr)


}