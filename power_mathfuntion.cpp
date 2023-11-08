#include<math.h>
#include<iostream>
using namespace std;
int main() {
    float base,exp,result;
    cout<<"Enter a base number: ";
    cin>>base;
    printf("Enter an exponent: ");
    cin>>exp;
    result = pow(base, exp);
    cout<<base<<exp<<result;
    return 0;
}
