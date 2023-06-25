#include <iostream>

using namespace std;

class ATM {
	public:
		int password_ = 4532;
		float money = 4500;
		void firstScreen() {
			cout << "Welcome to FBank! Please insert your card." << endl;
		}
		void	passwordChecker() {
			int password;
			cout << "Please enter your password: " << endl;
			cin >> password;
			if (password == password_)
				cout << "Password is correct!" << endl;
			else
				passwordChecker();
		}
	
		int		operations() {
			int operation;
			cout << "Please choose the operation that you want to make!" << endl;
			cout << "1: Withdrawal" << endl;
			cout << "2: Deposit" << endl;
			cout << "3: Balance" << endl;

			cin >> operation;
			return (operation);
		}
					
		void		withdrawal()
		{
			float amount;
			cout << "Please enter amount to withdraw!" << endl;
			cin >> amount;
			if (money <= 0)
				cout << "You cannot withdraw! You did not have enough money. Please deposit money." << endl;
			if (amount <= money) {
				money -= amount;
				cout << "You have withdrawn " << amount <<" $ from your account." << endl;
			}	
			else
			{
				cout << "You cannot withdraw this amount!. Please try again with less amount." << endl;
				withdrawal();
			}

		}
				

		void	deposit()
		{
			float amount;
			cout << "Please enter amount to deposit!" << endl;
			cin >> amount;
			money += amount;
			cout << "You have deposited" << amount <<" $ to your account." << endl;

		}

		int		balance()
		{
			cout << "Your balance is : " << money << "$" << endl;
		}
		
		
};

int main(){
	ATM a;
	a.firstScreen();
	a.passwordChecker();
	int op = a.operations();
	if (op == 1) a.withdrawal();
	else if (op == 2) a.deposit();
	else if (op == 3) a.balance();
	a.balance();
	return (0);
}	
