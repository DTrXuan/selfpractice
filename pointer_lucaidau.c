#include "stdio.h"
#include "stdlib.h"

//P is a pointer points to two pointers aka char array
char *p[2] = {"hehe","hoho"};

// ca is a array to store string hehe
char ca[] = {'h','e','h','e'}; 

// pa is a pointer points to string hehe
char *pa = "hehe";

int main(void)
{
    // print *p, in ra dia chi ma poiner chi den
    // print p, in ra gia tri cua dia chi pointer chi den
    printf("addres: %lu value: %s \n", *p[0], p[0]);
    
    /*  & lay dia chi cua *p, *p la gia tri cua dia chi p luu.
        gia tri cua p luu luc nay lai la mot dia chi khac.

        p = dia chi cua pointer string s
        *p = gia tri cua dia chi = dia chi cua string s?????
     */
    int i = 20;
    int *pi = &i;

    printf("%d \n", pi);

    // pirnt &ca, print theo dinh dang string %s tu gia tri cua dia chi &ca
    // print pa, print string tu dia chi cua pa luu
    printf("ca: %s pa: %s \n", &ca, pa);
}