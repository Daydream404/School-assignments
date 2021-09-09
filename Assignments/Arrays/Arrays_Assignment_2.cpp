#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int array_one[7];
    int array_two[7];
    int plus_array[7];
    int minus_array[7];
    int multiply_array[7];
    float divide_array[7];
    int random_number;

    cout<<"Array One = [ ";
    for(int i=0;i<7;i++){
        random_number = (rand()%10)+1;
        array_one[i] = random_number;
        cout<<array_one[i]<<" ";
    }
    cout<<"]"<<endl;

    cout<<"Array Two = [ ";
    for(int i=0;i<7;i++){
        random_number = (rand()%10)+1;
        array_two[i] = random_number;
        cout<<array_two[i]<<" ";
    }
    cout<<"]\n\n";
    
    for(int k=0;k<7;k++){
      plus_array[k] = array_one[k] + array_two[k];
      minus_array[k] = array_one[k] - array_two[k];
      multiply_array[k] = array_one[k] * array_two[k];
      divide_array[k] = array_one[k] / array_two[k];
    }

    cout<<"Plus Arrays = [ ";
    for(int i =0;i<7;i++){
      cout<<plus_array[i]<<" ";
    }
    cout<<"]"<<endl;

    cout<<"Minus Arrays = [ ";
    for(int i =0;i<7;i++){
      cout<<minus_array[i]<<" ";
    }
    cout<<"]"<<endl;

    cout<<"Multiply Arrays = [ ";
    for(int i =0;i<7;i++){
      cout<<multiply_array[i]<<" ";
    }
    cout<<"]"<<endl;

    cout<<"Divide Arrays = [ ";
    for(int i =0;i<7;i++){
      cout<<divide_array[i]<<" ";
    }
    cout<<"]";

    return 0;
}