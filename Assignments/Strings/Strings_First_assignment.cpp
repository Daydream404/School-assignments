/******************************************************************************
1. Create a program that inputs last three numbers of winning lottery tickets
2. You also need to input N number of sold lottery tickets
3. User have to input N lottery ticket id's and compare it to a winning ticket
4. Then tally up the wins and looses
*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

void ticket(string winning_ticket,string ticket_number, int N, int win, int loss) {
    srand(time(0));
    int gen = 100 + rand() % 899;
    winning_ticket = to_string(gen);
	for (int i = 1; i < N+1; i++) {
        cout << "Input " <<i<<". ticket number:";
		cin >> ticket_number;
		if (ticket_number == winning_ticket.substr(0, 4)) {
			cout << "Win"<<endl;
			win++;
			gen = 100 + rand() % 899;
            winning_ticket = to_string(gen);
		}
		else {
			cout << "Loss"<<endl;
			loss++;
		}
	}
	cout << "Losses: "<<loss<<" || ";
	cout << "Wins: " << win;
	
}

int main(){
    string winning_ticket, ticket_number;
	int N=0,win=0,loss=0;
	cout << "Enter number of your tickets:";
	cin >> N;
    ticket(winning_ticket,ticket_number,N,win,loss);
}