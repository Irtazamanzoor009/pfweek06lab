#include<iostream>
using namespace std;
bool greaternumber();
int num1, num2, num3;
main()
{
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;
    cout<<"Enter number 3: ";
    cin>>num3;
    bool result = greaternumber();
    if(result == true)
    {
        cout<<"Yes";
    }
    if(result == false)
    {
        cout<<"No";
    }
}
bool greaternumber()
{
    if(num1 == num2 && num1 == num3)
    {
        return true;
    }
    return false;
}