#include<iostream>
using namespace std;
float earnings();
float price;
int rows, columns;
string screen;
main()
{
    cout<<"Enter screen type: ";
    cin>>screen;
    cout<<"Enter number of rows: ";
    cin>>rows;
    cout<<"Enter number of columns: ";
    cin>>columns;
    float earn = earnings();
    cout<<"Earnings is: "<<earn<<endl;
}
float earnings()
{
    if(screen == "premiere" )
    {
        float result = 12 * rows * columns;
        return result;
    }
    if(screen == "normal" )
    {
        float result = 7.5 * rows * columns;
        return result;
    }
    if(screen == "discount" )
    {
        float result = 5 * rows * columns;
        return result;
    }
}