/******************************************************************************
1. Generate array A in range [1,10]
2. Generate array B in range [1,10]
3. Create functions for sum of array A and array B
4. Create functions for subtraction of array A and array B
5. Create functions for multiplying of array A and array B
6. Create functions for division of array A and array B
7. Print all the arrays
*******************************************************************************/

#include <iostream>

using namespace std;

void generate_array_a(int array_a[10])
{
  srand(time(0));
  cout << "Array A[";
  for (int i = 0; i < 10; i++)
  {
    array_a[i] = rand() % 10 + 1;
    if (i == 9)
    {
      cout << array_a[i];
    }
    else {
      cout << array_a[i] << ", ";
    }
  }
  cout << "]\n";
}

void generate_array_b(int array_b[10])
{
  cout << "Array B[";
  for (int i = 0; i < 10; i++)
  {
    array_b[i] = rand() % 10 + 1;
    if (i == 9)
    {
      cout << array_b[i];
    }
    else {
      cout << array_b[i] << ", ";
    }
  }
  cout << "]\n";
}

void plus_array(int array_a[10],int array_b[10],int array_plus[10]){
  for(int k=0;k<10;k++){
    array_plus[k] = array_a[k] + array_b[k];
  }
  cout<<"\nArray A+B[";
    for (int i = 0; i < 10; i++)
    {
    if (i == 9)
    {
      cout << array_plus[i];
    }
    else {
      cout << array_plus[i] << ", ";
    }
  }
  cout << "]\n";
}

void minus_array(int array_a[10],int array_b[10],int array_minus[10]){
  for(int k=0;k<10;k++){
    array_minus[k] = array_a[k] - array_b[k];
  }
  cout<<"\nArray A-B[";
    for (int i = 0; i < 10; i++)
    {
    if (i == 9)
    {
      cout << array_minus[i];
    }
    else {
      cout << array_minus[i] << ", ";
    }
  }
  cout << "]\n";
}

void multi_array(int array_a[10],int array_b[10],int array_multi[10]){
  for(int k=0;k<10;k++){
    array_multi[k] = array_a[k] * array_b[k];
  }
  cout<<"\nArray A*B[";
    for (int i = 0; i < 10; i++)
    {
    if (i == 9)
    {
      cout << array_multi[i];
    }
    else {
      cout << array_multi[i] << ", ";
    }
  }
  cout << "]\n";
}

void divide_array(int array_a[10],int array_b[10],float array_divide[10]){
  for(int k=0;k<10;k++){
     array_divide[k] = float(array_a[k]) / float(array_b[k]);
  }
  cout<<"\nArray A/B[";
    for (int i = 0; i < 10; i++)
    {
    if (i == 9)
    {
      cout << array_divide[i];
    }
    else {
      cout << array_divide[i] << ", ";
    }
  }
  cout << "]\n";
}

int main()
{
    int array_a[10];
    int array_b[10];
    
    int array_plus[10];
    int array_minus[10];
    int array_multi[10];
    float array_divide[10];

    generate_array_a(array_a);
    generate_array_b(array_b);

    plus_array(array_a,array_b,array_plus);
    minus_array(array_a,array_b,array_minus);
    multi_array(array_a,array_b,array_multi);
    divide_array(array_a,array_b,array_divide);
}