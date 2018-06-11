//
//  StableMarriageProblem.c
//  DataStructue&Algorithm
//
//  Created by Ganesan, Veeramani - Contractor {BIS} on 6/11/18.
//

#include <stdio.h>
#include <stdbool.h>
#define N 4

bool wPrefersM1OverM(int prefer[2*N][N], int w, int m1, int m)
{
    for (int i = 0; i < N; i++) {
        
        //if m1 (current engagement) comes first then it is better and then m (new)
        if(prefer[w][i] == m1)
            return true;
        
        //if m (new) comes first then it is better and then m1 (current engagement)
        if(prefer[w][i] == m)
            return false;
    }
    return true;
}

void stableMarriage (int prefer[2*N][N])
{
    int wPartenr[N];
    int mFree[N];
    int freeCount = N;
    
    memset(wPartenr, -1, sizeof(wPartenr));
    memset(mFree, false, sizeof(mFree));
    
    while (freeCount > 0)
    {
        
        //Find free men
        int m;
        for (m = 0; m < N; m++) {
            if (mFree[m] == false)
                break;
        }
        
        for(int i = 0; i < N && mFree[m] == false; i++)
        {
            int w = prefer[m][i];
            
            //if woman of preference is free then w and m become partners (Later it can be changed, so this is just an engagement)
            if(wPartenr[w - N] == -1)
            {
                wPartenr[w - N] = m;
                mFree[m] = true;
                freeCount--;
            }
            else
            {
                //Get current engagement
                int m1 = wPartenr[w - N];
                
                //Check whether w prefers m1 (current engagement) over m (new)
                if (wPrefersM1OverM(prefer, w, m1, m) == false) {
                    
                    wPartenr[w - N] = m;
                    mFree[m] = true;
                    mFree[m1] = false;
                }
            }
        }
    }
    
    for (int i = 0; i < N; i++)
    {
        printf("%d \t %d \n", i+N, wPartenr[i]);
    }
}

int main()
{
    
    int prefer[2*N][N] = { {7, 5, 6, 4},
        {5, 4, 6, 7},
        {4, 5, 6, 7},
        {4, 5, 6, 7},
        {0, 1, 2, 3},
        {0, 1, 2, 3},
        {0, 1, 2, 3},
        {0, 1, 2, 3},
    };
    
    stableMarriage(prefer);
}
