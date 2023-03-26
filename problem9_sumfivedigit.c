#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    int sum;
    scanf("%d", &n);
    
    /*  n = 12345 
        n/10 = 1234,    n%10 = 4
        n/10 = 123,     n%10 = 3
        n/10 = 12       n%10 = 2
        n/10 = 1        n = 1
    */
    if (n>=10000 && n<999999)
    {
        for (int i = 0; i<5;i++)
        {
            sum += n%10;
            n = n/10;
        }
    }
    printf("%d\n",sum);
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}