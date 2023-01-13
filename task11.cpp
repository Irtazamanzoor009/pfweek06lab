#include<iostream>
using namespace std;
string year;
int weekends, holidays;
int play();
main()
{
    cout<<"Year is leap or normal: ";
    cin>>year;
    cout<<"Holidays in a year: ";
    cin>>holidays;
    cout<<"Weekends that vladimir is going to home: ";
    cin>>weekends;
    int result = play();
    cout<<"Result is: "<<result<<endl; 

}
int play()
{
    if(year == "normal")
    {
        float weekendleft = 48 - weekends;
        float sofiaplay = weekendleft * 0.75;
        float holidayplay = holidays * 0.666;
        int total = sofiaplay + holidayplay + weekends;
        return total;   
    }
    if(year == "leap")
    {
        float weekendleft = 48 - weekends;
        float sofiaplay = weekendleft * 0.75;
        float holidayplay = holidays * 0.666;
        float total = sofiaplay + holidayplay + weekends;
        float percentage = total * 0.15;
        float totalpercentage = percentage + total;
        return totalpercentage;   
    }

}