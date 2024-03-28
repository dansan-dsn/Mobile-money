#include <iostream>
#include <iomanip>
using namespace std;

class MobileMoneyAccount {
    private: 
      double balance;
    public: 
      MobileMoneyAccount() : balance(0.0) {};
            void deposit(double amount) {
                 balance += amount;
                 cout << "Deposit of $" << fixed << setprecision(2) << amount << " successful." << endl;
            }

            void withdraw(double amount) {
                if(balance >= amount) {
                    cout << "Withdrawal of $" << fixed << setprecision(2) << amount << " successful" << endl;
                } else {
                    cout << "Insuficient funds. Withdrawal of $" << fixed << setprecision(2) << amount << " failed." << endl;
                }
            }

      void displayBalance(){
        cout << "Current balance: $" << fixed << setprecision(2) << balance << endl;
      }
};

int main() {
    MobileMoneyAccount account;
    account.deposit(100.0);
    account.displayBalance();

    account.withdraw(50.0);
    account.displayBalance();

    account.withdraw(70.0);
    account.displayBalance();
    return 0;
}