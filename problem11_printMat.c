#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int Mat[10000][10000];

void set_mat(int n, int arr[10000][10000])
{
    //set row
    int size;
    int start_point;
    for (int i = 0; i < n; i++)
    {   
        //fill mat from out to indside
        int value = n-i;
        size = 2*value-1;
        //fill ROW: set collumn, fix row in two border
        for(int col = 0; col<size;col++)
        {
            arr[start_point][col+start_point] = value;
            arr[size-1+start_point][col+start_point] = value;
        }
        // fill COLLUMN: set row, fix column in two border
        for(int row = 0; row<size;row++)
        {
            arr[row+start_point][start_point] = value;
            arr[row+start_point][size-1+start_point] = value;
        }
        start_point++;
    }

}

void print_mat(int n, int arr[10000][10000])
{
    int size = n + n- 1;
    for(int row = 0; row <size; row++)
    {
        for (int col = 0; col <size;col++)
        {
            printf("%d ",arr[row][col]);
        }
        printf("\n");
    }
}

int main() 
{

    int n;
    scanf("%d", &n);
    
    if(n>=1 && n<=1000)
    {
        set_mat(n,Mat);
        print_mat(n,Mat);
    }
    
  	// Complete the code to print the Mat[1000][1000]tern.
    return 0;
}