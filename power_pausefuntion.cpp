#include<iostream>
#include<cstdlib> //for pause 
using namespace std;
int main() 
{
    int base,expo;
    long result=1;
    cout<<"Enter base: ";
    cin>>base;
    cout<<"Enter exponent: ";
    cin>>expo;
   if(expo>=0) {
        for(int i=0;i<expo;i++) 
        {
            result*=base;
        }
   } 
   else 
   {
        for (int i=0;i>expo;i--) 
        {
            result/=base;
    }
   }
    cout<<base<<"^"<<expo<< " = "<<result<<endl;
    system("pause");
    return 0;}
