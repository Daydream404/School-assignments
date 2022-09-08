// Create a structure data type named Student with his basic info(name,surname,height,weight)
// a) Input his information into structure 
// b) Calculate the average height
// c) Calculate the average weight
// d) Print the student's info

#include <iostream>

using namespace std;

//Defining our structure
typedef struct{
    string name;
    string surname;
    float height;
    float weight;
}Student;


void info(Student x[5]) {
    for (int i = 0; i < 5; i++) {
        cout << "Name:";
        cin >> x[i].name;
        cout << "Surname:";
        cin >> x[i].surname;
        cout << "Height:";
        cin >> x[i].height;
        cout << "Weight:";
        cin >> x[i].weight;
        cout << endl;
    }
}


void average_height(Student x[5]) {
    float sum = 0;
    for (int i = 0; i < 5; i++) {
        sum = sum + x[i].height;
    }
    float aa = sum / 5; //Arithmetic Average = sum / count 
    cout << aa;
}


void average_weight(Student x[5]) {
    float sum = 0;
    for (int i = 0; i < 5; i++) {
        sum = sum + x[i].weight;
    }
    float aa = sum / 5; //Arithmetic Average = sum / count 
    cout << aa;
}


void highest_student(Student x[5])
{
    int p = 0; int m;
    for (int i = 0; i < 5; i++)
    {
        if (x[i].height > p)
        {
            p = x[i].height;
            m = i;
        }
    }
    cout << "\nStudent\'s name:" << x[m].name << "\nStudent\'s surname: " << x[m].surname << "\nStudent\'s height: " << x[m].height << "\nStudent\'s weight:" << x[m].weight <<endl;

}


void heaviest_student(Student x[5])
{
    int p = 0; int m;
    for (int i = 0; i < 5; i++)
    {
        if (x[i].weight > p)
        {
            p = x[i].weight;
            m = i;
        }
    }
    cout << "\nStudent\'s name:" << x[m].name << "\nStudent\'s surname: " << x[m].surname << "\nStudent\'s height: " << x[m].height << "\nStudent\'s weight:" << x[m].weight <<endl;
}


void print(Student x[5]) {
    for (int i = 0; i < 5; i++) {
        cout << i<<".student: ";
        cout<< x[i].name<<"|";
        cout<< x[i].surname<<"|";
        cout<< x[i].height<<"|";
        cout<< x[i].weight<<"|";
        cout << endl;
    }
}


int main()
{
    Student x[5];
    info(x);
    cout << "Average height: "; 
    average_height(x);
    cout<< endl;
    cout << "Average weight:";
    average_weight(x);
    cout << endl;
    cout << "Highest student: "<<endl;
    highest_student(x);
    cout << endl;
    cout<<"Heaviest student:" <<endl;
    heaviest_student(x);
    cout << endl;
    print(x);
}

