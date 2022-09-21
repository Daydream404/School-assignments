/******************************************************************************
OOP Classes with inheritance
*******************************************************************************/
#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

class Company {
public:
	Company();
	Company(string name, string type, string ceo, string address, int employees_number);
	void print();
protected:
	string Vname;
	string Vtype;
	string Vceo;
	string Vaddress;
	int Vemployees_number;
};

Company::Company() {
	//Constructor
}

Company::Company(string name, string type, string ceo, string address, int employees_number) {
	Vname = name;
	Vtype = type;
	Vceo = ceo;
	Vaddress = address;
	Vemployees_number = employees_number;
}

void Company::print() {
	cout << "\n------------------------------\n";
	sleep(1);
	cout <<"Name of the company: "  <<Vname<<endl;
	sleep(1);
	cout <<"Company type: "  <<Vtype<<endl;
	sleep(1);
	cout <<"CEO of the company: "  <<Vceo<<endl;
	sleep(1);
	cout <<"Company Address: " << Vaddress<<endl;
	sleep(1);
	cout <<"Number of employees: " << Vemployees_number<<endl;
	sleep(1);
}

class Employee : public Company{
protected:
	string Vname;
	string Vsurname;
	int Vage;
	string Vposition;
	float Vsalary;
public:
	Employee(string name,string surname,int age,string position,float salary);
	void Promotion();
	void Introduction();
};


Employee::Employee(string name, string surname, int age,string position,float salary){
	Vname = name;
	Vsurname = surname;
	Vage = age;
	Vposition = position;
	Vsalary = salary;
}

void Employee::Promotion() {
	if ((Vsalary <= 2000) && (Vage >= 30)) {
		cout << Vname<<" "<< Vsurname<<" can be promoted!"<<endl;
	}		
}

void Employee::Introduction() {
	cout << "\n------------------------------\n";
	sleep(1);
	cout << "Name : " << Vname << endl;
	sleep(1);
	cout << "Surname: " << Vsurname<< endl;
	sleep(1);
	cout << "Age: " << Vage << endl;
	sleep(1);
	cout << "Position: " << Vposition << endl;
	sleep(1);
	cout << "Salary: " << Vsalary << endl;
	
}

class Programmer : public Employee {
protected:
	string Vjob_title;
public:
	Programmer(string name, string surname, int age, string position, float salary,string job_title) :Employee(name, surname, age, position, salary) {
		Vjob_title = job_title;
	}
	void Info();
};

void Programmer::Info() {
	cout << "\n------------------------------\n";
	sleep(1);
	cout << "Name : " << Vname << endl;
	sleep(1);
	cout << "Surname: " << Vsurname << endl;
	sleep(1);
	cout << "Age: " << Vage << endl;
	sleep(1);
	cout << "Position: " << Vposition << endl;
	sleep(1);
	cout << "Salary: " << Vsalary << endl;
	sleep(1);
	cout << "Job title: " << Vjob_title << endl;
}

int main()
{
	Company Automobile("Tesla","Automobile Company","Elon Musk","Austin, Texas US",200000);
	Automobile.print();
	
	Employee Employee1("John","Smith",29,"Programmer",5800);
	Employee1.Introduction();
	Employee1.Promotion();

	Employee Employee2("Adam", "Johns", 45, "Programmer", 6800);
	Employee2.Introduction();
	Employee2.Promotion();

	Employee Employee3("Jack", "Holden", 30, "Repairman", 3000);
	Employee3.Introduction();
	Employee3.Promotion();
	
	Programmer Programmer1("Adam", "Johns", 45, "Programmer", 6800, "SW Developer");
	Programmer1.Info();

}

	