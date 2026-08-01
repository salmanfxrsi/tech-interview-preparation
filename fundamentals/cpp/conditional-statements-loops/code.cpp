#include<iostream>
using namespace std;

int main()
{
    int sum = 0;

    // sum from 1 to 100 with for loop
    for(int i = 1; i <= 100; i++)
    {
        sum += i;
    }

    cout << sum << "\n";


    int age = 19;

    // conditional statements
    if(age <= 12) cout << "He is baby" << "\n";
    else if(age <= 18) cout << "He is young but not a voter" << "\n";
    else cout << "He is a voter" << "\n";


    return 0;
}