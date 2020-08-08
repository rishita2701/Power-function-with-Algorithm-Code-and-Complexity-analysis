 CODE FOR TRADITIONAL APPROACH:

#include<iostream>
using namespace std;

int power(int x,unsigned int y)
{
    int temp;
    if(y==0)
        return 1;
    else if(y%2==0)
        return power(x,y/2)*power(x,y/2);
    else
        return x*power(x,y/2)*power(x,y/2);
}
int main()
{
    int x;
    unsigned int y;
    cout<<"Enter base value: ";
    cin>>x;
    cout<<"Enter power: ";
    cin>>y;
    cout<<power(x,y);
    return 0;
}


CODE FOR OPTIMIZED APPROACH:

#include<iostream>
using namespace std;

int power(int x,unsigned int y)
{
    int temp;
    if(y==0)
        return 1;
    temp=power(x,y/2);
    if(y%2==0)
        return temp*temp;
    else
        return x*temp*temp;
}
int main()
{
    int x;
    unsigned int y;
    cout<<"Enter base value: ";
    cin>>x;
    cout<<"Enter power: ";
    cin>>y;
    cout<<power(x,y);
    return 0;
}

