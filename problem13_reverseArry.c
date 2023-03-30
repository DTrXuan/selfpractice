#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, *r_arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    r_arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    for (int i = 0; i<num;i++)
    {
        r_arr[num-i-1] = arr[i];
    }
    /* Write the logic to reverse the array. */


    for(i = 0; i < num; i++)
        printf("%d ", *(r_arr + i));
    return 0;
}