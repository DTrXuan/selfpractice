/*https://www.hackerrank.com/challenges/for-loop-in-c*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char *NumberWord[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    // Complete the code.
    for(int i=a;i<=b;i++)
    {
        if(i>9)
        {
            (i%2)==0?printf("even\n"):printf("odd\n");
        }
        else
        {
            printf("%s\n",NumberWord[i]);
        }
    }
    return 0;
}

