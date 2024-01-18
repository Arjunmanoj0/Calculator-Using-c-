#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    
    cout<<"enter the 1st no:";
    cin>>a;

    cout<<"enter the 2nd no:";
    cin>>b;

    cout<<"1.add\n";
    cout<<"2.substract\n";
    cin>>c;

    switch (c)
    {
    case 1:
        d=a+b;
        cout<<d;
        break;
        case 2:
        d=a-b;
        cout<<d;
        break;
    
    default:
        break;
    }
    
    

    return 0;
}