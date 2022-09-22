/******************************************************************************
1.Create a parent class MobilePhone and child class Smartphone
2. In main function simulate everyday usage of these devices by random choice

MobilePhone class
-ownNumber: string
+ MobilePhone(string number)
+ call(string who):void
+ sendSMS(string who, string text):void

Smartphone class
+ Smartphone(string number)
+ call(string who):void
+ sendSMS(string who, string text):void
+ useGPS():void

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

class MobilePhone {
protected:
	string ownNumber;
public:
	MobilePhone();
	MobilePhone(string number);
	void call(string who);
	void sendSMS(string who, string text);
};

MobilePhone::MobilePhone(){
	//Constructor
}

MobilePhone::MobilePhone(string number) {
	cout << "MobilePhone number: " << number<<endl;
    ownNumber = number;
}

void MobilePhone::call(string who) {
	cout << "Called number " << who<<endl;
}

void MobilePhone::sendSMS(string who, string text) {
	cout << "Number "<<ownNumber<<" just sent SMS to: " << who << " with message: " << text << endl;
}

class Smartphone : public MobilePhone {
public:
	Smartphone();
	Smartphone(string number);
	void call(string who);
	void sendSMS(string who, string text);
	void showGPS();
};

Smartphone::Smartphone() {
	//Constructor of child class
}

Smartphone::Smartphone(string number) : MobilePhone(number) {
	//Contructor of child class with argument
}

void Smartphone::call(string who) {
	cout << "Smartphone "<<ownNumber;
	MobilePhone::call(who);
	cout<<endl;
}

void Smartphone::sendSMS(string who, string text) {
	cout << "Smartphone ";
	MobilePhone::sendSMS(who, text);

}

void Smartphone::showGPS() {
	cout << "GPS used!"<<endl;
}

int main() {
	MobilePhone object("0918888424");
	Smartphone object1("0949697334");
    cout<<endl;
	srand(time(0));
	int rn = 0;
	int rn2 = 0;
	int rn1=0;
	for (int i = 0; i < 10; i++) {
		rn = rand() % 2 + 0;
		if (rn == 0) {
			rn1 = rand() % 2 + 0;
			if(rn1==0)
				object.call("0908987654");
			else
				object.sendSMS("0905521958", "I'll see you tomorrow.");
		}
		else
		{
			rn2 = rand() % 3 + 0;
			if(rn2 ==0)
				object1.call("0949648721");
			else if(rn2==1)
				object1.sendSMS("0908444546", "Hello, how are you?");
			else
				object1.showGPS();
		}
	}
}
