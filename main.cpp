#include <iostream>
#include <cstdio>
#include <ctime>
#include <fstream>
using namespace std;

int partition(double array[], int start, int end) // part of quickSort
{
    double pivot = array[end-1];
    int i = (start - 1); // Index of smaller element

    for (int j = start; j <= end - 1; j++)
    {
        if (array[j] <= pivot)// If current element is smaller than or equal to pivot
        {
            i++;    // increment index of smaller element
            double temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
    double temp2 = array[i + 1];
    array[i + 1] = array[end - 1];
    array[end - 1] = temp2;
    return (i + 1);
}
void quickSort(double array[], int start, int end)//starting index and ending index
{
    if(start < end)
    {
        int partitionIndex = partition(array, start, end);
        quickSort(array, start, partitionIndex - 1);
        quickSort(array, partitionIndex + 1, end);
    }
}



void insertionSort(double array[], int end)
{
  for(int i = 0; i < end - 1; i++)
  {
    for(int j = i; j > 0 && array[j-1] > array[j]; j--)
    {
      double temp = array[j];
      array[j] = array[j - 1];
      array[j - 1] = temp;
    }
  }
}

void bubbleSort(double array[], int end)
{
  for(int i = 0; i < end - 1; i++)
  {
    double temp = 0;
    for(int j = 0; j < end - 2; j++)
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

void selectionSort(double array[], int end)
{
  int minIndex;
  double temp;
  for(int i = 0; i < end - 1; i++)
  {
    minIndex = i;
    for(int j = i + 1; j < end - 1; j++)
    {
      if(array[i] < array[minIndex])
      {
        minIndex = j;
      }
    }
    if(minIndex != i)
    {
      temp = array[i];
      array[i] = array[minIndex];
      array[minIndex] = temp;
    }
  }
}

void runQuickSort(double array[], int end)
{
    clock_t startTime;
    clock_t endTime;
    double duration;
    int start =  0;

    startTime = clock();

    quickSort(array, start, end);

    endTime = clock();

    duration = (endTime - startTime) / (double) CLOCKS_PER_SEC;
    cout<<"Quick Sort ran from :  "<< startTime << " to " << endTime << endl;
    cout<<"Resulting in a runtime of : " << duration << endl;
}

void runInsertionSort(double array[], int end)
{
    clock_t startTime;
    clock_t endTime;
    double duration;
    startTime = clock();

    insertionSort(array, end);

    endTime = clock();

    duration = (endTime - startTime) / (double) CLOCKS_PER_SEC;
    cout<<"Insertion Sort ran from :  "<< startTime << " to " << endTime << endl;
    cout<<"Resulting in a runtime of : " << duration << endl;
}

void runBubbleSort(double array[], int end)
{
    clock_t startTime;
    clock_t endTime;
    double duration;
    startTime = clock();

    bubbleSort(array, end);

    endTime = clock();

    duration = (endTime - startTime) / (double) CLOCKS_PER_SEC;
    cout<<"Bubble Sort ran from :  "<< startTime << " to " << endTime << endl;
    cout<<"Resulting in a runtime of : " << duration << endl;
}

void runSelectionSort(double array[], int end)
{
    clock_t startTime;
    clock_t endTime;
    double duration;
    startTime = clock();

    selectionSort(array, end);

    endTime = clock();

    duration = (endTime - startTime) / (double) CLOCKS_PER_SEC;
    cout<<"Selection Sort ran from :  "<< startTime << " to " << endTime << endl;
    cout<<"Resulting in a runtime of : " << duration << endl;
}

int main(int argc, char** argv)
{

  string fileName;
  double input; // used for inputing the data from the file
  if(argc > 1) // checks for user input of file name
  {
    fileName = argv[1];
  }
  else
  {
    cout << "Enter the name of the file " << endl;
    getline(cin, fileName);
  }
  fstream inputFile(fileName);
  if(inputFile.is_open())
  {
    string line;
    getline(inputFile,line); // gets he number of lines of data for array size
    int numData = stoi(line);
    double array1[numData];
    double array2[numData];
    double array3[numData];
    double array4[numData];
    int index = 0;
    while(getline(inputFile,line))//saves 4 copies of the arrays
    {
      input = stod(line);
      array1[index] = input;
      array2[index] = input;
      array3[index] = input;
      array4[index] = input;
      index++;
    }
    runQuickSort(array1, numData);
    runInsertionSort(array2, numData);
    runBubbleSort(array3, numData);
    runSelectionSort(array4, numData);
  }

}
