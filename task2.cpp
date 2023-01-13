#include<iostream>
using namespace std;
float discount();
string day, month;
float price;
float result;
main()
{
    cout<<"Enter price of item: ";
    cin>>price;
    cout<<"Enter day: ";
    cin>>day;
    cout<<"Enter month: ";
    cin>>month;

    float result1 = discount();
    cout<<"Payable is: "<<result1<<endl;
}
float discount()
{

    if(day == "sunday" && (month == "october" || month == "march" || month == "august"))
    {
        result = price - (price * 0.1);
        return result;
    }
    else if(day == "monday" && (month == "november" || month == "december"))
    {
        result  = price - (price * 0.05);
        return result;
    }
    else
    {
        return price;
    }
}