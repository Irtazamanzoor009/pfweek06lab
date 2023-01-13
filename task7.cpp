#include<iostream>
using namespace std;
float check();
string city, product;
int quan;
main()
{
    cout<<"Enter the name of city: ";
    cin>>city;
    cout<<"Enter product name: ";
    cin>>product;
    cout<<"Enter quantity: ";
    cin>>quan;
    float result = check();
    cout<<"Total Price: "<<result<<endl;
}
float check()
{
    if(product == "coffee" && city == "sofia")
    {
        float price = 0.5 * quan;
        return price;
    }
    else if(product == "water" && city == "sofia")
    {
        float price = 0.8 * quan;
        return price;
    }
    else if(product == "beer" && city == "sofia")
    {
        float price = 1.2 * quan;
        return price;
    }
    else if(product == "sweets" && city == "sofia")
    {
        float price = 1.45 * quan;
        return price;
    }
    else if(product == "peanuts" && city == "sofia")
    {
        float price = 1.6 * quan;
        return price;
    }
    else if(product == "coffee" && city == "piovdiv")
    {
        float price = 0.4 * quan;
        return price;
    }
     else if(product == "water" && city == "piovdiv")
    {
        float price = 0.7 * quan;
        return price;
    }
     else if(product == "beer" && city == "piovdiv")
    {
        float price = 1.15 * quan;
        return price;
    }
     else if(product == "sweets" && city == "piovdiv")
    {
        float price = 1.3 * quan;
        return price;
    }
     else if(product == "peanuts" && city == "piovdiv")
    {
        float price = 1.5 * quan;
        return price;
    }
     else if(product == "coffee" && city == "varna")
    {
        float price = 0.45 * quan;
        return price;
    }
    else if(product == "water" && city == "varna")
    {
        float price = 0.7 * quan;
        return price;
    }
    else if(product == "beer" && city == "varna")
    {
        float price = 1.1 * quan;
        return price;
    }
    else if(product == "sweets" && city == "varna")
    {
        float price = 1.35 * quan;
        return price;
    }
    else if(product == "peanuts" && city == "varna")
    {
        float price = 1.55 * quan;
        return price;
    }
    
}