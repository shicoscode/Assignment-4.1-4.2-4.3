#include <iostream>
using namespace std;
int main()
{
    int n, min;
    cout << "enter number";
    cin >> n;
    min = n ;
    for (int i = 0; i < 9; i++)
    {
        cout << "enter number";
        cin >> n;
        if (n < min)
        {
            min = n;
        }
    }
    cout << "smallest number = "<< min;
}
