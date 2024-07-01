#include <cs50.h>
#include <stdio.h>
#include <math.h>

//4.3 Write a C++ program to read two numbers X & Y and calculate and print XY, provided that Y is an integer
int main()
{
    int x=get_int("x: ");
    int y=get_int("y: ");
    int z = pow(x,y);
    printf("y to the power of x= %i ",z);
}

    //code in C++
    //int x
    //cout << "please give the first number \n" ;
    //cin << x;
    //int y
    //cout << "please give the second number \n" ;
    //cin << y;

