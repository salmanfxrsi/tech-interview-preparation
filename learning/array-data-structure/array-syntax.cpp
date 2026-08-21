#include<iostream>
using namespace std;

int main()
{
    int marks[5] = {99, 100, 54, 36, 88};
    double price[] = {87.33, 46.22, 53.44, 67.97};

    cout << marks[0] << endl;
    
    marks[0] = 100;

    cout << marks[0] << endl;
    return 0;
}