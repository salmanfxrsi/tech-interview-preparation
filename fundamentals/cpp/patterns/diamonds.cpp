/*

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

*/

// 4, 3, 2, 1, 0, 1, 2, 3, 4 - Gap Serial
// 1, 3, 5, 7, 9, 7, 5, 3, 1 - Star Serial
// total line - 9
// n = 5

#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    // first half of pattern
    for (int i = 1; i <= n; i++)
    {
        // gap printer loop
        for (int j = i; j <= n - 1; j++)
        {
            cout << " ";
        }

        // star printer loop
        for (int j = 1; j <= (i * 2) - 1; j++)
        {
            cout << "*";
        }

        cout << "\n";
    }

    // second half of pattern
    for (int i = n - 1; i >= 1; i--)
    {
        // gap printer loop
        for (int j = i; j <= n - 1; j++)
        {
            cout << " ";
        }

        // star printer loop
        for (int j = 1; j <= (i * 2) - 1; j++)
        {
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}