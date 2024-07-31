#include "public.hpp"

int Paritition(int arry[], int low, int high)
{
    int pivot = arry[low];
    while (low < high)
    {
        if (arry[high] >= pivot)
        {
            --high;
        }
        arry[low] = arry[high];
        if (arry[low] <= pivot)
        {
            ++low;
        }
        arry[high] = arry[low];
    }
    arry[low] = pivot;
    return low;
}

void QuickSort(int arry[], int low, int high)
{
    if (low < high)
    {
        int pivot = Paritition(arry, low, high);
        QuickSort(arry, low, pivot - 1);
        QuickSort(arry, pivot + 1, high);
    }
}
