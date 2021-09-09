// Create an 2D array A[5][5] and generate numbers into the array from interval <-20,120>
// a) Calculate the average of a row number(that you input)
// b) Calculate the average of a column number(that you input)
// c) Find the highest number from the principal diagonal

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int A[5][5];
vector <int> vect;

void generate() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            A[i][j] = rand() % 140 + (-20);
        }
    }
}

void prnt() {
    for (int i = 0; i < 5; i++)
    {
        cout << "\n";
        for (int j = 0; j < 5; j++)
        {
            if (j == 0 && i==0) {
                cout << "A {{ ";
                cout << A[i][j] << "\t";
            }
            else {
            cout <<"   "<<A[i][j] << "\t";

            }
        }
    }
    cout <<"}}"<<endl;
}

void APc() {
    int stlpec = 0;
    int sums = 0;
    cout << "Enter the number of a column: ";
    cin >> stlpec;
    for (int i = 0; i < stlpec; i++) {
        for (int j = 0; j < 5; j++) {
            //cout<<A[i][0]<<endl;
            sums += A[i][0];
            i += 1;
        }
    }
    cout << sums << endl;
    cout << float(sums) / 5 << endl;
}

void APr() {
    int riadok = 0;
    int sumr = 0;
    cout << "Enter the number of a row: ";
    cin >> riadok;
    for (int i = 0; i < riadok; i++) {
        for (int j = 0; j < 5; j++) {
            //cout<<A[0][j]<<endl;
            sumr += A[0][j];
        }
    }
    cout << sumr << endl;
    cout << float(sumr) / 5 << endl;
}


void max() {
    int maxi = 0;
    int p = 0;
    int i = 0;
    for (int j = 0; j < 5; j++) {
        vect.push_back(A[j][j]);
        i += 1;
    }
    /*for (int x : vect)
        cout << x << " ";*/
    cout << "MAX: " << *max_element(vect.begin(), vect.end()) << endl;
}

int main() {
    srand(time(0));
    generate();
    prnt();
    cout << endl;
    max();
    APr();
    APc();
}

