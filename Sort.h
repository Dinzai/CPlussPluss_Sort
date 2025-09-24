#include <iostream>
//Brett Rogers
//-Practice Recursion


//class should contain all neccesary functions for sorting basic arrays


struct Search   
{   


    int GetLength(int arr[]);
    void LoopLinear(int arr[], int length);
    int* LoopRecursive(int arr[], int length, int count);       //helper method for searching through an array
};

//All methods should implment recursion, no while or for loops

struct Sort
{
    void Swap(int arr[], int a, int b);                         //helper method for moving array chunks
   
    int* BubbleSort(int arr[], int start);

    int* SelectionSort(int arr[], int start);

    int* InsertionSort(int arr[], int start);

    int* MergeSort();

};


