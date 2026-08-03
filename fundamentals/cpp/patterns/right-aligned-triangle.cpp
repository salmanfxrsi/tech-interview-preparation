/*

        *
      * *
    * * *
  * * * *
* * * * *

*/

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int gapCounter = n - 1;
    int starCounter = 1;

    // print each line
    for (int i = 1; i <= n; i++)
    {
        // print gaps
        for (int j = i; j <= n - 1; j++)
        {
            cout << "  ";
        }

        gapCounter--;

        // print stars
        for (int j = 1; j <= i; j++)
        {
            cout << " *";
        }

        starCounter++;

        cout << "\n";
    }

    return 0;
}