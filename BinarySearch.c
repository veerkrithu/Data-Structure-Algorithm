//
//  BinarySearch.c
//  DataStructue&Algorithm
//
//  Created by Ganesan, Veeramani - Contractor {BIS} on 6/3/18.
//

#include <stdio.h>

int binarySearch(int array[], int front, int rear, int search) {
    
    if(front <= rear)
    {
        int mid = front + (rear - front) / 2;
    
        if (search == array[mid])
            return mid;
        
        if(search < array[mid] ) {
            return binarySearch(array, front, mid - 1 , search);
        }
        else if (search > array[mid]) {
            return binarySearch(array, mid + 1, rear, search);
        }
    }

    return -1;
}

int main() {
    
    int array[] = {2, 6, 10, 23, 44, 53, 68, 79, 80, 99};
    
    int length = sizeof(array) / sizeof(array[0]);
    int index = binarySearch(array, 0, length - 1, 68);
    
    printf("%d", index);
}
