#ifndef PUBLIC_HPP
#define PUBLIC_HPP

#include <iostream>
using namespace std;

#define N 10

int Show(int arry[]);

int BubbleSortTest(int arry[]);
void BubbleSort(int arry[]);

int QuickSortTest(int arry[], int low, int high);
void QuickSort(int arry[], int low, int high);
int Paritition(int arry[], int low, int high);

int MergeSortTest(int arry[], int len);
void MergeSort(int arr[], int len);

#endif