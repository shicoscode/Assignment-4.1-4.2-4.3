#include <cs50.h>
#include <stdio.h>

// 4.2 Write a C program that reads a set of 10 numbers and finds and prints the order of the largest number.
// Rethink the design it seems odd
// What if the user inputs 3 similar numbers which order are you going to print ?
int img(int a);

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
    int position = 0;
    // For loop
    for (int i = 1; i < n ; i++)
    {
        if (numbers[i] < smallest)
        {
            smallest = numbers[i];
            position = i;
        }
    }
    printf("smallest = %i position = %i \n", smallest,position);
}
