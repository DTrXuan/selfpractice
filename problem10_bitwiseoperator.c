#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {

    int maxAnd, MaxOr, MaxXor;
    maxAnd = 0;
    MaxOr = 0 ;
    MaxXor =0;

    for (int i = 1; i<n;i++)
    {
        for(int j = i+1;j<=n;j++)
        {
            //find MaxAnd
            if(((i&j)<k) 
            && ((i&j)>maxAnd)
            ) maxAnd = i&j;

            //find MaxOr
            if(((i|j)<k) 
            && ((i|j)>MaxOr)
            ) MaxOr = i|j;

            //find MaxAnd
            if(((i^j)<k) 
            && ((i^j)>MaxXor)
            ) MaxXor = i^j;
        }
    }
    // print and result
    printf("%d\n%d\n%d\n",maxAnd,MaxOr,MaxXor);
    // print or result
    // pritn xor result
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    
    if(n>=2 && k<=n)
    {
        calculate_the_maximum(n, k);
    }    
    return 0;
}
