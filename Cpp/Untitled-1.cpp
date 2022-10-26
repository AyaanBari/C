#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "Enter two numbers: ";
    cin>> a;
    cin>> b;
    if (a > b || b > a)

    {
        cout << "The numbers are not equal";
    }
    else
    {
        cout << "The numbers are  equal";
    } 

 
    return 0;
}