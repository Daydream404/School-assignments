#include <iostream>

using namespace std;

int main() {
  int A[5]={9, 7, 4, 11, 14};
  int B[5];
  int *x, *y;
  x=A;
  y=B;
  
  for(int i=0; i<5; i++) {
    *y=*x; //B[i]=A[i];
    x++;
    y++;
  }
  cout<<"A = { ";
  for(auto a : A){
    cout<< a << " ";
  }
  cout<<"}"<<endl;

  cout<<"B = { ";
  for(auto b : B){
    cout << b << " ";
  }
  cout<<"}"<<endl;

  return 0;
}
