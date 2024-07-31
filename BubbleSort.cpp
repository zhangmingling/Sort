#include "public.hpp"

void BubbleSort(int arry[])
{
    int min = 0;
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - 1 - i; j++)
        {
            if (arry[j] > arry[j + 1])
            {
                int temp = arry[j];
                arry[j] = arry[j + 1];
                arry[j + 1] = temp;
                // swap(arry[j], arry[j + 1]);
            }
        }
    }
}