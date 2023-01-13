#include<iostream>
using namespace std;
string checktitle();
int age;
char gender;
main()
{
    cout<<"Enter age: ";
    cin>>age;
    cout<<"Enter gender: ";
    cin>>gender;
    string result = checktitle();
    cout<<result;
}
string checktitle()
{
    if(age >= 16 && gender == 'm')
    {
        return "Mr.";
    }
    else if(age < 16 && gender == 'm')
    {
        return "Master";
    }
    else if(age >= 16 && gender == 'f')
    {
        return "Ms.";
    }
    else if(age < 16 && gender == 'f')
    {
        return "Miss.";
    }
}