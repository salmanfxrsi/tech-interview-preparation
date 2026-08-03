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
    int starCounter = 1;

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << "";
        }

        for (int j = 1; j <= starCounter; j++)
        {
            cout << "*";
        }

        starCounter += 2;
        cout << "\n";
    }

    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i; j <= n - 1; j--)
        {
            cout << " ";
        }
        cout << "\n";
    }

    return 0;
}