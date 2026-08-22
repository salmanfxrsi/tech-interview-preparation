#include <iostream>
using namespace std;

int linearSearch(int target, int size, int arr[])
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return 1;
        }
    }
    return -1;
}

int main()
{
    int target, size;
    cin >> target >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    if (linearSearch(target, size, arr) == 1)
        cout << "target founded";
    else
        cout << "target not found";

    return 0;
}