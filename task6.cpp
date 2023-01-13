#include<iostream>
using namespace std;
float lowestprice();
int kilometers;
string time;
main()
{
    cout<<"Enter number of kilometers you want to travel: ";
    cin>>kilometers;
    cout<<"Enter travel time i.e day or night: ";
    cin>>time;
    float res = lowestprice();
    cout<<"Cost: "<<res;
}
float lowestprice()
{
    if(time == "day"  && kilometers < 20 ) //for taxi day
    {
        float result =  (0.79* kilometers)+0.7;
        return result;
    }
    else if(time == "night"   && kilometers < 20) //for taxi night
    {
        float result = (0.9 * kilometers) + 0.7;
        return result;  
    }
    else if((time == "day" || time == "night") && (kilometers >= 20 && kilometers <=100)) //for bus
    {
        float result = 0.09 * kilometers;
        return result;
    }
    else if((time == "day" || time == "night") && (kilometers > 100) ) //for train
    {
        float result = 0.06 * kilometers;
        return result;
    } 
    
}
