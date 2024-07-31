#include "public.hpp"

int main()
{
    int low = 0, high = N - 1;
    int arry[N];
    for (int i = 0; i < N; i++)
    {
        arry[i] = N - i - 1;
    }
    cout << "before: ";
    Show(arry);

    // QuickSortTest(arry, low, high);
    // BubbleSortTest(arry);
    MergeSortTest(arry, N);

    cout << "after:  ";
    Show(arry);

    return 0;
}

int QuickSortTest(int arry[], int low, int high)
{
    QuickSort(arry, low, high);
    return 0;
}

int BubbleSortTest(int arry[])
{
    BubbleSort(arry);
    return 0;
}

int MergeSortTest(int arry[], int len)
{
    MergeSort(arry, len);
    return 0;
}