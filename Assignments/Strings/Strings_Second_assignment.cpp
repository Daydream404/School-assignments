/******************************************************************************
Palindrome check
Check if input string is or is not palindrome
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
