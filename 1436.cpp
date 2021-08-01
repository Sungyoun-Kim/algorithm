#include<iostream>
#include<string>
using namespace std;


int main()
{
    
    int a;

    cin>>a;
    int x=0;
    
    string y="";


    for(int i=666;;i++)
    {
        
        y=to_string(i);
       
        if(y.find("666")!=string::npos)
        {
            a--;

            if(a==0){
                cout<<y<<endl;
                break;
            }
        }
      
    }
  
}


