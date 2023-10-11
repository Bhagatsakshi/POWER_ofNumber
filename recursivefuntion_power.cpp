#include <iostream>
using namespace std;
double power(double n,int p) {
  if(p==0) 
  {
    return 1;
  } else if(p==1) 
  {
    return n;
  } else 
  {
    return n*power(n,p-1);
  }
}
int main() {
  double n;
  int p;
  cout<<"Enter the base: "<<endl;
  cin>>n;
  cout<<"Enter the power: "<<endl;
  cin>>p;
  cout<<n<<" raised to the power "<<p<<" is "<<power(n,p)<< endl;
  return 0;
}
