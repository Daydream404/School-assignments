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

void print() {
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

void average_column() {
    int column = 0;
    int csum = 0;
    cout << "Enter the number of a columns: ";
    cin >> column;
    for (int i = 0; i < column; i++) {
        for (int j = 0; j < 5; j++) {
            //cout<<A[i][0]<<endl;
            csum += A[i][0];
            i += 1;
        }
    }
    cout << csum << endl;
    cout << float(csum) / 5 << endl;
}

void average_row() {
    int row = 0;
    int rsum = 0;
    cout << "Enter the number of a row: ";
    cin >> row;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < 5; j++) {
            //cout<<A[0][j]<<endl;
            rsum += A[0][j];
        }
    }
    cout << rsum << endl;
    cout << float(rsum) / 5 << endl;
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
    print();
    cout << endl;
    max();
    average_row();
    average_column();
}

