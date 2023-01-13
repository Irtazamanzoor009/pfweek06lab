#include<iostream>
using namespace std;

int greatest();
int num1, num2,num3;
main()
{
    cout<<"Enter a number 1: ";
    cin>>num1;
    cout<<"Enter a number 2: ";
    cin>>num2;
    cout<<"Enter a number 3: ";
    cin>>num3;

    int result = greatest();
    cout<<result<<" is greater"<<endl;
}
int greatest()
{
    if(num1 > num2 && num1 > num3)
    {
       return num1;
    }
    else if(num2 > num1 && num2 > num3)
    {
       return num2;
    }
    else if(num3 > num1 && num3 > num2)
    {
       return num3;
    }
    else 
    {
      return num2;
    }
}