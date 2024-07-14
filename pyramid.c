#include <stdio.h>

/* It Took me 5+ hours to solve this assignment !! , Write a C program to replicate this sequence.
       a
      aba
     abcba
    abcdcba
   abcdedcba
  abcdefedcba
 abcdefgfedcba
abcdefghgfedcba
*/

int main()
{
    int nboflines = 8;
    int x = 1;
    int r,v,d;
    char m ;

    for (int i = 0; i < nboflines; i++)
    {
        r = i + x;
        d = 1 ;
        for (int j = nboflines-i ; j > 1 ; j--)
        {
            printf(" ");
        }

        for(int k = 0; k < r ;k++)
        {
            if (k <= i)
            {
                m = 'a' + k;
                if ( k == i )
                {
                    v = k;
                }
            }
            else if (k > i)
            {
                m = 'a' + v - d ;
                d++ ;  
            }
                printf("%c",m);
        }
        x++;
        printf("\n");
    }
}


