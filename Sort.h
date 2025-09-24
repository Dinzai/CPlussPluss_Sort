#include <iostream>
//Brett Rogers
//-Practice Recursion


//class should contain all neccesary functions for sorting basic arrays


struct Search   
{   
    Search()
    {

    }

    void LoopLinear(int arr[], int length);
    int* LoopRecursive(int arr[], int length, int count); //helper method for searching through an array
};

//All methods should implment recursion, no while or for loops

struct Sort
{
    void Swap();//helper method for moving array chunks
   
    int* BubbleSort();

    int* SelectionSort();

    int* InsertionSort();

    int* MergeSort();

};


