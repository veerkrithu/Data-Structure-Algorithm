//
//  SelectionSort.c
//  DataStructue&Algorithm
//
//  Created by Ganesan, Veeramani - Contractor {BIS} on 6/2/18.
//

#include <stdio.h>

//Bubble Sort - This sorting selects the minimum element and places that element in first.. second... place during every iteration.
//Worst, Best and Average Case Time Complexity - O(n2)
//Space Complexity - O(1)

void selectionSort(int array[], int count)
{
    for(int i = 0; i < count; i++)
    {
        int minValue = array[i];
        int minIndex = i;
        
        for(int j = minIndex + 1; j < count; j++)
        {
            if(array[j] < minValue)
            {
                minValue = array[j];
                minIndex = j;
            }
        }
        
        array[minIndex] = array[i];
        array[i] = minValue;
    }
    
    printf("Sorted Array: ");
    for(int i = 0; i < count; i++)
    {
        printf("%d  ", array[i]);
    }
}

int main() {
    
    int array[] = {3, 1, 6, 7, 2, 4, 5, 8};

    int length = sizeof(array) / sizeof(array[0]);
    selectionSort(a, length);
}
