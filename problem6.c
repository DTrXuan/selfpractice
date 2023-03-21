/* Task

You have to print the character, , in the first line. Then print  in next line. In the last line print the sentence, .

Input Format

First, take a character,  as input.
Then take the string,  as input.
Lastly, take the sentence  as input. 

Constraints

Strings for  and  will have fewer than 100 characters, including the newline.

Output Format

Print three lines of output. The first line prints the character, .
The second line prints the string, .
The third line prints the sentence, .

see deteail in hackerank.
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX_LEN 100

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char ch;
    char s[MAX_LEN];
    char sen[MAX_LEN];
    /* take a character as input*/
    scanf("%c",&ch);
    /* take a string as input, util first space*/
    scanf("%s",&s);
    /* take a string as input, as a line*/
    scanf("\n"); //read newline character before read a line
    scanf("%[^\n]%*c",sen);

    printf("%c\n%s\n%s\n",ch,s,sen);
    

    return 0;
}