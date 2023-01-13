#include<iostream>
using namespace std;
char grade();
int marks;
main()
{
    cout<<"Enter marks: ";
    cin>>marks;
    char result = grade();
    cout<<"Your grade is "<<result<<endl;
}
char grade()
{
    if(marks < 50)
    {
        return 'F';
    }
    else if(marks >= 50 && marks <= 60)
    {
        return 'E';
    }
    else if(marks >= 61 && marks <= 70)
    {
        return 'D';
    }
    else if(marks >= 71 && marks <= 80)
    {
        return 'C';
    }
    else if(marks >= 81 && marks <= 85)
    {
        return 'B';
    }
    else
    {
        return 'A';
    }
    
}