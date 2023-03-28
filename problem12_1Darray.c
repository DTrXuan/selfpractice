#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/* Array in C is a container object that holds a fixed number of values
of a single type. we have static array and dynamic array.
static array gas nenirt allocated at compile time.
dynamic array can be create by using malloc function, 
the momory is allocacted on the heap at runtime.
eg:
int *arr = (int*)malloc(n*sizeof(int))
when you have finished with the array, use free(arr) to de allocacted the memory
*/

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    

    int n,sum;
    sum = 0;
    scanf("%d\n",&n);

    if(n>0 && n<=1000)
    {
        int *arr = (int*)malloc(n*sizeof(int));
        for (int i=0; i<n;i++)
        {
            scanf("%d",&arr[i]);
            sum+=arr[i];
            // printf("ai=%d ",arr[i]);
        }
        sum;
        free(arr);
    }


    printf("%d",sum);

    return 0;
}