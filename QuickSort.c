//
//  QuickSort.c
//  DataStructue&Algorithm
//
//  Created by Ganesan, Veeramani - Contractor {BIS} on 6/3/18.
//

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int array[], int low, int high)
{
    int pivot = array[high];
    int i = (low - 1);
    
    for (int j = low; j < high; j++)
    {
        if(array[j] <= pivot)
        {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    
    swap(&array[i+1], &array[high]);
    
    return (i + 1);
}

void quickSort(int array[], int low, int high)
{
    if(low < high)
    {
        int pivotIndex = partition(array, low, high);
        
        quickSort(array, low, pivotIndex - 1);
        quickSort(array, pivotIndex + 1, high);
    }
}

int main()
{
    int arr[] = {9, 7, 5, 11, 12, 2, 14, 3, 10, 6};
    int length = sizeof(arr)/sizeof(arr[0]);
    
    quickSort(arr, 0, length - 1);
    
    int i;
    for (i=0; i < length; i++)
        printf("%d ", arr[i]);

    return 0;
}
