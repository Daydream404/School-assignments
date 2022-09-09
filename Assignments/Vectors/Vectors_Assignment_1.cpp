/******************************************************************************
1. Create a vector that stores int numbers
2. Input number into vector
3. Find factor of input number
*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int enterNumber(int &x) {
  cin >> x;
  return x;
}

vector<int> findFactor(int x,vector<int>&vect) {
    for (int i = 1; i < x; i++) {
        if (x % i == 0) {
            vect.push_back(i);
        }
    }
    return vect;
}

int main() {
    vector<int>vect;
    int x = 0;
    cout<<"Enter the number: ";
    enterNumber(x);
    findFactor(x,vect);
    cout<<"Factors of "<<x<<" are: ";
    for (int i = 0; i < vect.size(); i++) {
        cout << vect.at(i) << " ";
    }
}
