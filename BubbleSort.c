//
//  BubbleSort.c
//  DataStructue&Algorithm
//
//  Created by Ganesan, Veeramani - Contractor {BIS} on 6/1/18.
//


#include <stdio.h>

//Bubble Sort - This sorting pops up largest number in the array to the top during every interation
//Worst and Average Case Time Complexity - O(n2)
//Best Case Time - O(n)

void bubbleSort(int *array, int count)
{
    for (int i = 0; i < count; i++)
    {
        int flag = 0;
        for (int j = 0; j < count - (1 + i); j++)
        {
            if (array[j] > array[j+1])
            {
                int temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;
                flag = 1;
            }
        }
        
        if(!flag)
            break;
    }
    
    printf("Sorted Array: ");
    for(int i = 0; i < count; i++)
    {
        printf("%d  ", array[i]);
    }
    
    printf("Total Execution: %d", k);
}


int main () {
    
    int array[] = {31, 1, 45, 4 ,2};
    
    int length = sizeof(array) / sizeof(array[0]);
    
    //Call the function bubbleSort
    bubbleSort(array, length);
}

