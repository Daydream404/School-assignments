/******************************************************************************
1. Create a Structure with 2D array member inside
2. Input or generate numbers into 2D array
3. Find arithmetic average of column with index 1
4. Find arithmetic average of principal and secondary diagonal
*******************************************************************************/

#include <iostream>
#include <ctime>

using namespace std;

//Defining global structure with a 2D Array inside
typedef struct {
	int X[3][3];
}Array;

void input(int X[3][3]) {
	cout << "Enter nine numbers:";
	for (int r = 0; r < 3; r++) {
		for (int c = 0; c < 3; c++) {
			cin >> X[r][c];
		}
	}
}

void generate(int X[3][3]){
    srand(time(0));
	for (int r = 0; r < 3; r++)
	{
		for (int c = 0; c < 3; c++)
		{
			X[r][c] = rand() % 25 + 0;
		}
	}
}


void arithmetic_average(int X[3][3]) {
	float sum = 0;
	int num = 3;
	for (int r = 0; r < 3; r++)
	{
		sum += X[r][1];
		cout << endl;
	}
	cout << "Arithmetic average of column with index 1: " << sum / num << endl;
}


void arithmetic_average_principal(int X[3][3]) {
	float sum = 0;
	int num = 3;
	int col = 2;
	for (int i = 0; i < 3; i++) {
		sum = sum + X[i][col];
		col = col - 1;
	}
	cout << "Arithmetic average of principal diagonal: " << sum / num << endl;
}


void arithmetic_average_secondary(int X[3][3]) {
	float sum = 0;
	int num = 3;
	int row = 2;
	for (int i = 0; i < 3; i++) {
		sum = sum + X[row][i];
		row = row - 1;
	}
	cout << "Arithmetic average of secondary diagonal: " << sum / num << endl;
}


void print(int X[3][3]) {
	cout << "\nPrintout:";
	for (int r = 0; r < 3; r++) {
		cout << endl;
		for (int c = 0; c < 3; c++) {
			cout<< "\t" <<X[r][c];
		}
	}
}


int main() {
	Array numbers;
	//input(numbers.X); /*INPUT numbers or generate*/ 
    generate(numbers.X); /*INPUT numbers or generate*/ 
	print(numbers.X);
	arithmetic_average_principal(numbers.X);
	arithmetic_average_secondary(numbers.X);
}