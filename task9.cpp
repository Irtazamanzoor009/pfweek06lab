#include<iostream>
using namespace std;
bool issimmilar();
string word1, word2;
main()
{
    while (true)
    {
    cout<<"Enter word 1: ";
    cin>>word1;
    cout<<"Enter word 2: ";
    cin>>word2;
    bool res = issimmilar();
    if(res == true)
    {
        cout<<"Yes"<<endl;
    }
    if(res == false)
    {
        cout<<"No"<<endl;
    }
    }
    
   
}
bool issimmilar()
{
    if(word1 == word2)
    {
        return true;
    }
    return false;
}