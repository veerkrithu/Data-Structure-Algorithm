//
//  Palindrome.c
//  DataStructue&Algorithm
//
//  Created by Ganesan, Veeramani - Contractor {BIS} on 6/7/18.
//

#include <stdio.h>

int isPalindrome(char array[], int length) {
    
    int low = 0;
    int high = length - 1;
    
    while (high > low)
    {
        if(array[low++] != array[high--])
              return -1;
    }

    return 1;
}

int main () {
    
    char *string = "ABCDDCBA";
    int length = strlen(string);
    int result = isPalindrome(string, length);
}
