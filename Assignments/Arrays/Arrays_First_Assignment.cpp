#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{   
    int n,number;
    cout<<"Set the size of the array: ";
    cin>>n;
    int array[n];

    for(int i=0;i<n;i++){
      cout<<"Enter the "<<i+1<<". number: ";
      cin>>number;
     array[i]=number;        
    }

    cout<<"\nThe Array = [ ";

    for(int j=0;j<n;j++){
      cout<<array[j]<<" ";
    }
    cout<<"]";
    return 0;
}