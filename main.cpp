#include <iostream>


using namespace std;

int sum(int a,int b)
{
    return a+b;
}


int main()
{
    int a,b;
    cout<<"enter the value of a : ";
    cin>>a;
    cout<<"enter the value of b :";
    cin>>b;
    cout<<"Sum of two nos is : "<<sum(a,b);
    return 0;
}