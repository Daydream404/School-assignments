// Create a 2D Array named students[3][6] with three rows as Student's ID and six columns as their grades 
// We have n number of students, every student has m marks/grades
// a) Calculate arithmetic average of every student
// b) Calculate their ratings
// Ratings(PV-average <=1.5 worst grade can be 2)
//        (PVD-average <=2.0 worst grade can be 3)
//        (P- worst grade can be 4)
//        (N- if student has at least one 5)

//MARK GRADING SYSTEM
//1 = A+ 
//2 = B
//3 = C 
//4 = D 
//5 = F 

#include <iostream>

using namespace std;

void read(float students[3][6]) {
	for (int r = 0; r < 3; r++) {
		for (int s = 0; s < 4; s++) {
			if (s == 0) {
				cout << "Student\'s ID(INT):" << endl;
				cin >> students[r][s];
			}
			if (s == 1)
				cout << "Input marks for " << r + 1 << ".student: " << endl;
			if (s >= 1)
				cin >> students[r][s];
		}
	}

}
void average(float students[3][6]) {
	float S;
	for (int r = 0; r < 3; r++) {
		S = 0;
		for (int s = 1; s < 4; s++) {
			S += students[r][s];
		}
		students[r][4] = S / 3;
	}
}

void rating(float students[3][6]) {
	for (int r = 0; r < 3; r++) {
			if (students[r][4] <= 1.5){
				if (students[r][1] <= 3 && students[r][2] <= 3 && students[r][3] <= 3) {
					students[r][5] = 1;//PV
				}
			}
			else if (students[r][4] <= 2){
				if (students[r][1] < 4 && students[r][2] < 4 && students[r][3] < 4) {
					students[r][5] = 2;//PVD
				}
			}
			else if (students[r][1] <= 4 && students[r][2] <= 4 && students[r][3] <= 4)
			{
				students[r][5] = 4;//P
			}
			else if(students[r][1] <= 5 && students[r][2] <=5 && students[r][3] <= 5){
				students[r][5] = 5;//N
			}
			else{
				students[r][5] = 0;

			}
	}
}

void print(float students[3][6]) {
	cout << " ID" << "\t";
	for (int r = 1; r < 4; r++){
		cout <<"     "<<r << " mark" << "\t";
	}	
	cout << "    Average\t   Rating" << endl;
	cout<<"-----------------------------------------------------------------------------------------"<<endl;
	for (int r = 0; r < 3; r++) {
		for (int s = 0; s < 6; s++) {
			cout << students[r][s] << "\t|\t";
	
		}
		cout << endl;
	}
	cout << endl;
}

void sort_by_best(float students[3][6]) {
	for (int i = 1; i < 3; i++) {
		for (int j = 0; j < 3 - i; j++) {
			if (students[j][4] > students[j + 1][4]) {
				for (int f = 0; f < 5; f++) {
					float h = students[j][f];
					students[j][f] = students[j + 1][f];
					students[j + 1][f] = h;
				}
			}
		}
	}
}
int main() {
	float students[3][6];
	read(students);
	average(students);
	//print(students);
	sort_by_best(students);
	rating(students);
	print(students);
	cout << "\n1=PV | 2=PVD | 4=P | 5=N | 0=Error"<<endl;
	return 0;
}
