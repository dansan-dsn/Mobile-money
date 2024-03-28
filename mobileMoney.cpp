
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    
    float accountBalance = 50000.0, depositAmount, withdrawAmount, amount;
    string code, name;
    int options, pinNumber, inputPin, phoneNumber;

    cout << "\n\n\t        Customer Service\n"
         << "\t    Dail *195# for our services.Thank You\n\n";
    
    ofstream file;
    ifstream ifile;
    file.open("fileData.txt");
    ifile.open("fileData.txt");

    cout << "Register your name : ";
    getline(cin, name);
    file << name << endl;
    cout << "Register your PIN(4 choice numbers) : ";
    cin  >> pinNumber;
    file << pinNumber  << endl;

    cout << "Enter code : ";
    cin  >> code;
    
    if(code == "*195#") {
        
      cout << " \n Reltel Services"
           << "\n1. Deposit money\n"
           << "2. Withdraw money\n"
           << "3. Send money\n"
           << "4. Check your balance\n"
           << "5. exit\n\n";

      cout << "Enter your option : ";
      cin  >> options;
         if(options == 1 || options == 2 || options == 3 || options == 4 || options == 5) {
             switch(options) {
               case 1 : 
                cout << "\nDeposite Money\n"
                     << "Enter amount : ";
                cin >> depositAmount;
                file << depositAmount << endl;
                accountBalance += depositAmount;
                file << accountBalance << endl;
                cout << "Hello " << name << ". You have made a deposit of " << depositAmount << setprecision(2)
                     << ".shs\n  Thanks for using RelTel Services.\n";
                break;

               case 2:
                cout << "\nWithdraw money\n"
                     << "Enter amount : ";
                cin >> withdrawAmount;

                 if(withdrawAmount > accountBalance) {
                    cout << "Insufficient Amount!" << endl;
                } else if (withdrawAmount <= accountBalance) {
                   cout << "Your withdrawing money for " << name
                        << "\nConfirm with your PIN : ";
                   cin >> inputPin;
               //     ifile >> pinNumber;
                   if(inputPin == pinNumber) {
                    cout << "You have made a withdraw of " << withdrawAmount << setprecision(2) << ".shs" << endl;
                    // ifile >> accountBalance;
                    cout << "Your account balance is " << (accountBalance - withdrawAmount) << setprecision(2) << ".shs\n";
                   } else {
                     cout << "Wrong PIN number\n";
                   }
                }
                break;

                case 3:
                cout << "\nSend Money\n"
                     << "1.Reltel number\n"
                     << "2. Other number\n\n";
                cout << "Enter option : ";
                cin >> options;
                    if(options == 1) {
                        cout << "\nEnter number : ";
                        cin >> phoneNumber;
                        cout << "Enter Amount: ";
                        cin >> amount;
                          if(amount > accountBalance) {
                              cout << "Insuficient Balance..." << endl;
                          } else {
                              cout << "You sent " << amount << setprecision(2) << ".shs to " << phoneNumber << endl;
                              cout << "Account balance : " << accountBalance - amount << setprecision(2) << ".shs" << endl;
                          }
                    } else if(options == 2) {
                        cout << "Enter the other number : ";
                        cin >> phoneNumber;
                        cout << "Enter Amount: ";
                        cin >> amount;
                          if(amount > accountBalance) {
                              cout << "Insuficient Balance..." << endl;
                          } else {
                              cout << "You sent " << amount << setprecision(2) << ".shs to " << phoneNumber << endl;
                              cout << "Account balance : " << accountBalance - amount<< setprecision(2) << ".shs" << endl;
                          }
                    }
             }



         } else {
            cout << "WrongCode!\n";
         }

    } else {
        cout << "Incorrect code input!";
        return main();
    }

    return 0;
}