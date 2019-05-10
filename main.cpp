#include <iostream>
#include <cstdio>
#include <ctime>
using namespace std;


void quickSort(double array[], int start, int end)//starting index and ending index
{
    if(start < end)
    {
        partitionIndex = partition(array, start, end);
        quickSort(array, start, partitionIndex - 1);
        quickSort(array, partitionIndex + 1, end);
    }
}
int partition (double array[], int start, int end) // part of quickSort
{
    double pivot = array[end];
    int i = (start - 1); // Index of smaller element

    for (int j = start; j <= end - 1; j++)
    {
        if (array[j] <= pivot)// If current element is smaller than or equal to pivot
        {
            i++;    // increment index of smaller element
            swap array[i] and array[j];
        }
    }
    swap array[i + 1] and array[end]);
    return (i + 1);
}


void insertionSort(double[] array)
{
  for(int i = 0; i < array.length(); i++)
  {
    double temp = array[i]; //store marked item
    int k = i; //where to start shifting
    while(k > 0 && array[k-1] >= temp)//while left num is larger, shift
    {
      array[] = array[k-1];
      k--;
    }
    array[k] = temp; // put marked item in the right spot
  }
}

void bubbleSort(double array[])
{
  for(int i = 0; i < array.length() - 1; i++)
  {
    double temp = 0;
    for(int j = 0; j < array.length() - 2; j++)
    {
      if(array[j] > array[j+1])
      {
        temp = array[j+1];
        array[j+1] = array[j];
        array[j] = temp;
      }
    }
  }
}

void selectionSort(double array[])
{
  int minIndex;
  double temp;
  for(int i = 0; i < array.length(); i++)
  {
    minIndex = i;
    for(int j = i + 1; j < array.length(); j++;)
    {
      
    }
  }
}

void runQuickSort(array[])
{
    clock_t startTime;
    double duration;
    int start =  0;
    int end = array.length();
    
    startTime = clock();
    
    quickSort(array, start, end);

    duration = (clock() - startTime) / (double) CLOCKS_PER_SEC;
    cout<<"Quick Sort ran for :  "<< duration << endl;
}

void runInsertionSort(double array[])
{
    clock_t startTime;
    double duration;
    startTime = clock();
    
    insertionSort(array);

    duration = (clock() - startTime) / (double) CLOCKS_PER_SEC;
    cout<<"Insertion Sort ran for :  "<< duration << endl;
}

void runBubbleSort(double array[])
{
    clock_t startTime;
    double duration;
    startTime = clock();
    
    bubbleSort(array);

    duration = (clock() - startTime) / (double) CLOCKS_PER_SEC;
    cout<<"Bubble Sort ran for :  "<< duration << endl;
}

void runSelectionSort(double array[])
{
    clock_t startTime;
    double duration;
    startTime = clock();
    
    selectionSort(array);

    duration = (clock() - startTime) / (double) CLOCKS_PER_SEC;
    cout<<"Selection Sort ran for :  "<< duration << endl;
}

int main(int argc, char** argv)
{
    //bla bla get the file into a double array
    //double array[] = //input file;
    runQuickSort(array);
    runInsertionSort(array);
    runBubbleSort(array);
    runSelectionSort(array);
}
