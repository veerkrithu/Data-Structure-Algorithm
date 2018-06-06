//
//  ReverseString.c
//  DataStructue&Algorithm
//
//  Created by Ganesan, Veeramani - Contractor {BIS} on 6/5/18.
//

#include <stdio.h>

char* reverseString(char *str, int length, char* reversed) {
    
    static int index = 0;
    
    if(*str && index < length)
    {
        reverseString(str + 1, length, reversed);
        reversed[index++] = *str;
    }
    
    return reversed;
}

int main() {
    
    char str[] = "Veeramani Ganesan";
    size_t length = (size_t) strlen(str);
    
    char *reversed = (char*) malloc(length * sizeof(char));
    printf("%s", reverseString(str, length, reversed));
    
}
