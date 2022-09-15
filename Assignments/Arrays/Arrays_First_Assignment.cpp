/******************************************************************************
1. Generate 10 numbers in range [-10,100] into an A array
2. Sort the numbers in array in ascending and descending order
3. Find the second smallest and highest number
*******************************************************************************/

#include <iostream>

using namespace std;

int s;

void generate(int array[10])
{
    srand(time(0));
    cout << "Array A[";
    for (int i = 0; i < 10; i++)
    {
        array[i] = rand() % 111 - 10;
        if (i == 9)
        {
            cout << array[i];
        }
        else {
            cout << array[i] << ", ";
        }
    }
    cout << "]\n";
}

void ascending_order(int array[10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int i = 0; i <9; i++)
        {
            if (array[i] > array[i + 1])
            {
                int swap = array[i];
                array[i] = array[i + 1];
                array[i + 1] = swap;
            }
        }
    }
}

void descending_order(int array[10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int i = 0; i <9; i++)
        {
            if (array[i] < array[i + 1])
            {
                int swap = array[i];
                array[i] = array[i + 1];
                array[i + 1] = swap;
            }
        }
    }
}

void print(int array[10])
{
    cout << "[";
    for (int i = 0; i < 10; i++)
    {
        if (i == 9)
        {
            cout << array[i];
        }
        else {
            cout << array[i] << ", ";
        }
    }
    cout << "]" << endl;
    s = array[1];
}

int main()
{
    int A[10];
    generate(A);
    cout<<"\nAscended array A";
    ascending_order(A);
    print(A);
    cout << "Second smallest number: " << s <<endl;
    cout<<"\nDescended array A";
    descending_order(A);
    print(A);
    cout << "Second highest number: " << s <<endl;
    return 0;
}