#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name = "Salman";
    int age = 19;
    double gpa = 5.00;
    bool student = true;

    cout << "Name: " << name << "\n";
    cout << "Age: " << age << "\n";
    cout << "GPA: " << gpa << "\n";

    if(student && age > 18) cout << "Eligible";
    
    return 0;
}