
#include<iostream>
using namespace std;

int main()
{
    
    double a;
    double b;
    double v;

    cin>>a>>b>>v;
    double result=(v-b)/(a-b);
    int result2=((int)v-(int)b)/((int)a-(int)b);
    if(result>result2)
    result2=result2+1;
    
    cout<<result2;
}