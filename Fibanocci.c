//
//  Fibanocci.c
//  DataStructue&Algorithm
//
//  Created by Ganesan, Veeramani - Contractor {BIS} on 6/7/18.
//

#include <stdio.h>

int fib(int n)
{
    int a = 0, b = 1, c = 0;
    
    
    if( n == 0)
        return a;
    
    printf("%d", a);
    printf("%d", b);
    
    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        printf("%d", c);
        
        a = b;
        b = c;
    }
    
    
    return b;
}

int main ()
{
    fib(9);
    return 1;
}
