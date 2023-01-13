#include<iostream>
using namespace std;
main()
{
    int number;
    string brand;
    cout<<"Enter a number: ";
    cin>>number;
    cout<<"Enter brand name:";
    cin>>brand;
    if(number <= 1500 && brand=="outfitters")
    {
        cout<<"Good"<<endl;
    }
    else
    {
        cout<<"Not Good"<<endl;
    }
}