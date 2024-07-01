#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

// 4.1 Write a C program that reads a set of 10 numbers and finds and prints the smallest number.

int main(void)
{
    int n = 10;
    int numbers[n];

    // Initialization
    for (int i = 0; i < n; i++)
    {
        numbers[i] = get_int("Number: ");
    }
    int smallest = numbers[0];
    // Do (size of array -2 comparisons)
    for (int i = 1; i < n ; i++)
    {
        if (numbers[i] < smallest)
        {
            smallest number = numbers[i];
        }
    }
    printf("smallest=%i;", smallest);
}
