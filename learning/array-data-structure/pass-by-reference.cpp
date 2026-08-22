#include <iostream>
using namespace std;

int changeArr(int arr[], int n)
{
    cout << "in function\n";
    for (int i = 0; i < n; i++)
    {
        arr[i] *= 2;
    }
}

int main()
{
    int arr[] = {1, 2, 3};
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    
    changeArr(arr, 3);

    cout << "in main\n";

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}