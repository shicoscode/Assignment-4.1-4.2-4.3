#include <iostream>

using namespace std;

int main(void)
{
    int marks[] = { 4, 3, 3, 2, 1, 2, 2, 1, 0, 0};
    int n = sizeof(marks) / sizeof(int);
    cout << "size = " << n << endl;
    for (int j = 1; j < n ; j ++)
    {
    for (int i = 0; i < n - j ; i++)
        {
            if (marks[i] > marks[i + 1])
            {
                int temp = marks[i];
                marks[i] = marks[i + 1];
                marks[i + 1] = temp ;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << marks[i] << " / ";
    }
    cout << endl;
    int steps = 0;
    int five[5];
    int j = 0;
    int stored,holdindex;
    for (int i = 0; i < n; i++)
    {
        steps++;
        if(marks[i] != marks[i+1])
        {
            five[j] = steps;
            steps = 0;
            j++;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << five[i] << " / " ;
    }
    stored = five[0];
    holdindex = 0;
    for (int i = 0 ; i < 5; i++)
    {
        if(stored < five[i])
        {
            stored = five[i];
            holdindex = i;
        }
    }

    cout << "\nthe dominant grade = " << holdindex ;
    cout << endl << stored << " students got this grade";
} 
