#include <iostream>;
using namespace std;

class Account{
private:
	int balance;
public:
	Account(int);
	void credit(int);
	void debit(int);
	int getBalance();
};

Account::Account(int bal){
	if (bal >= 0){
		balance = bal;
	}
	else {
		balance = 0;
		cout << "Invalid account balance." << endl;
	}
}

int Account::getBalance(){
	return balance;
}

void Account::debit(int amt){
	if (amt <= balance){
		balance -= amt;
	}
	else {
		cout << "Debit amount exceeded account balance." << endl;
	}
}

void Account::credit(int amt){
	balance += amt;
}

int main(){

	int tempBalance;

	cout << "Enter initial balance for Account One: ";
	cin >> tempBalance;

	Account account1(tempBalance);

	cout << "Enter initial balance for Account Two: ";
	cin >> tempBalance;

	Account account2(tempBalance);

	while (1) {
		int accountChoice;
		cout << "Select account (1 or 2): ";
		cin >> accountChoice;

		int credAmt;
		int debAmt;

		if (accountChoice == 1){
			cout << "Account 1 selected." << endl;

			char selection;

			cout << "G = getBalance, C = credit, D = debit" << endl << "Please enter your selection: ";
			cin >> selection;

			switch (selection)
			{
			case 'g':
				cout << "Account balance: " << account1.getBalance() << endl;
				break;
			case 'G':
				cout << "Account balance: " << account1.getBalance() << endl;
				break;
			case 'c':
				cout << "Enter amount to deposit: ";
				cin >> credAmt;
				account1.credit(credAmt);
				cout << "Desposit completed.";
				cout << "Account balance: " << account1.getBalance() << endl;
				break;
			case 'C':
				cout << "Enter amount to deposit: ";
				cin >> credAmt;
				account1.credit(credAmt);
				cout << "Desposit completed.";
				cout << "Account balance: " << account1.getBalance() << endl;
				break;
			case 'd':
				cout << "Enter amount to withdraw: ";
				cin >> debAmt;
				account1.debit(debAmt);
				cout << "Withdrawal completed.";
				cout << "Account balance: " << account1.getBalance() << endl;
				break;
			case 'D':
				cout << "Enter amount to withdraw: ";
				cin >> debAmt;
				account1.debit(debAmt);
				cout << "Withdrawal completed.";
				cout << "Account balance: " << account1.getBalance() << endl;
				break;
			default:
				cout << "Invalid selection!" << endl;
				break;
			}
		}
		else if (accountChoice == 2) {
			cout << "Account 2 selected." << endl;

			char selection;

			cout << "G = getBalance, C = credit, D = debit" << endl << "Please enter your selection: ";
			cin >> selection;

			switch (selection)
			{
			case 'g':
				cout << "Account balance: " << account2.getBalance() << endl;
				break;
			case 'G':
				cout << "Account balance: " << account2.getBalance() << endl;
				break;
			case 'c':
				cout << "Enter amount to deposit: ";
				cin >> credAmt;
				account2.credit(credAmt);
				cout << "Desposit completed.";
				cout << "Account balance: " << account2.getBalance() << endl;
				break;
			case 'C':
				cout << "Enter amount to deposit: ";
				cin >> credAmt;
				account2.credit(credAmt);
				cout << "Desposit completed.";
				cout << "Account balance: " << account2.getBalance() << endl;
				break;
			case 'd':
				cout << "Enter amount to withdraw: ";
				cin >> debAmt;
				account2.debit(debAmt);
				cout << "Withdrawal completed.";
				cout << "Account balance: " << account2.getBalance() << endl;
				break;
			case 'D':
				cout << "Enter amount to withdraw: ";
				cin >> debAmt;
				account2.debit(debAmt);
				cout << "Withdrawal completed.";
				cout << "Account balance: " << account2.getBalance() << endl;
				break;
			default:
				cout << "Invalid selection!" << endl;
				break;
			}
		}
		else {
			cout << "Invalid account selection." << endl;
		}
	}

	return 0;
}