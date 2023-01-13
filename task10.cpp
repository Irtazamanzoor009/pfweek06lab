#include<iostream>
using namespace std;
float budget, people;
float percentage2, percentage1;
string category;
void match();
void vip();
void normal();
main()
{
    cout<<"Enter your budget: ";
    cin>>budget;
    cout<<"Enter number of people: ";
    cin>>people;
    cout<<"Enter your trip category: ";
    cin>>category;
    match();
}
void match()
{
    if(people ==1 && people <=4)
    {
        if(category == "VIP")
        {
            percentage1 = budget - (budget * 0.75);
            vip();
        }
        if(category == "normal")
        {
            percentage2 = budget - (budget * 0.75);
            normal();
        }

    }

    if(people >=5 && people <=9)
    {
        if(category == "VIP")
        {
            percentage1 = budget - (budget * 0.6);
        vip();
        }
        if(category == "normal")
        {
            percentage2 = budget - (budget * 0.6);
            normal();
        }
    }

    if(people >=10 && people <=24)
    {
        if(category == "VIP")
        {
        percentage1 = budget - (budget * 0.5);
            vip();
        }
        if(category == "normal")
        {
            percentage2 = budget - (budget * 0.5);
            normal();
        }
    }

    if(people >=25 && people <=49)
    {
        if(category == "VIP")
        {
        percentage1 = budget - (budget * 0.4);
            vip();
        }
        if(category == "normal")
        {
        percentage2 = budget - (budget * 0.4);
            normal();
        }
    }

    if(people >= 50)
    {
        if(category == "VIP")
        {
        percentage1 = budget - (budget * 0.25);
        vip();
        }
        if(category == "normal")
        {
        percentage2 = budget - (budget * 0.25);
        normal();
        }
    }
}
void vip()
{
    
    float totalpeople = people * 499.99;
    float result = percentage1 - totalpeople;
        if(result > 0)
        {
            cout<<"Yes! you have"<<result<<" left";
        }
        if(result < 0)
        {
            float result2 = totalpeople - percentage1;
            cout<<"Not enough money! You need "<<result2<<" QR.";
        }
}
void normal()
{
    
     float totalpeople = people * 249.99;
     float result = percentage2 - totalpeople;
     if(result > 0)
     {
        cout<<"Yes! you have "<<result<<" left";
     }
     if(result < 0)
     {
        float result2 = totalpeople - percentage2;
        cout<<"Not enough money! You need "<<result2<<" QR.";
     }
}