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
    for (int i = 0; i < size(vect); i++) {
        cout << vect.at(i) << " ";
    }
}
