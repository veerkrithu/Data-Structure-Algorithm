//
//  MergeSort.c
//  DataStructue&Algorithm
//
//  Created by Ganesan, Veeramani - Contractor {BIS} on 6/2/18.
//

#include <stdio.h>

void merge(int array[], int front, int middle, int rear) {
    
    int i, j, k;
    int temp[rear];
    
    k = 0;
    i = front;
    j = middle + 1;
    
    while (i <= middle && j <= rear)
    {
        if(array[i] < array[j])
            temp[k++] = array[i++];
        else
            temp[k++] = array[j++];
    }
    
    while (i <= middle) {
        temp[k++] = array[i++];
    }
    
    while (j <= rear) {
        temp[k++] = array[j++];
    }
    
    
    for(int i = rear; i>= front; i--)
    {
        array[i] = temp[--k];
    }
}

void mergeSort(int array[], int front, int rear) {
    
    int middle;
    
    if(front < rear)
    {
        middle = front + (rear - front) / 2;
        
        mergeSort(array, front, middle);
        mergeSort(array, middle + 1, rear);
        
        merge(array, front, middle, rear);
    }
}


int main() {
    
    int a[7];
    a[0] = 31;
    a[1] = 21;
    a[2] = 6;
    a[3] = 55;
    a[4] = 2;
    a[5] = 4;
    a[6] = 1;
    
    int length = sizeof(a)/sizeof(a[0]);
    
    mergeSort(a, 0, length - 1);
    
    for (int i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }
}
