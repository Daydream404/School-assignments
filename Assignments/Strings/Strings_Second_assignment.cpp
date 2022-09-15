/******************************************************************************
1. Create a program that does Palindrome check
2. Check if inputed string is or is not palindrome
3. Example: Hello is not a palindrome
			Kayak is a palindrome
*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

void palindrome(string input){
	int a = 0;
	int b = input.length()-1;
	while (b > a) {
		if (input[a++] == input[b--]){
			cout <<input<< "is palindrome"<<endl;
			return;
		}
		else {
			cout << input<<"is not palindrome"<<endl;
			return;
		}
	}
}

int main(){
    string input;
	cout << "Input string";
	getline(cin, input);
    palindrome(input);
}
