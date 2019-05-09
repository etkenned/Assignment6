#include <iostream>

using namespace std;


void quickSort(array[], int start, int end)//starting index and ending index
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


int main(int argc, char** argv)
{

}
