#include<iostream>
using namespace std;
int main() {
    int base,exp;
    long int result=1;
    cout<<"Enter a base number: ";
    cin>>base;
    printf("Enter an exponent: ");
    cin>>exp;
    while(exp!=0) 
    {
        result*=base;
        --exp;
    }
    cout<<result;
    return 0;
}
