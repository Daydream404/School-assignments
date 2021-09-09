#include <iostream>

using namespace std;

int GCD(int a,int b) {
  if(a==b){
    return a;
  }
  if(a>b){
    return GCD(a-b,b);
  }
  if(b>a){
    return GCD(a,b-a);
  } 
}

int main() {
  int a=0, b=0;
  cout<<"Enter first number:";
  cin>>a;
  cout<<"Enter second number:";
  cin>>b;
  cout<<"GCD of "<<a<<" and "<<b<<": "<<GCD(a, b);
  return 0;
}
