
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main () {
     int a, i = 0;
     string text, old, password1, password2, pass, name, password0, age, user, word, word1;
     string creds[2], cp[2];

     cout << "         Security System" << endl;

     cout << "___________________________________"<< endl << endl;
     cout << "|            1. Register            |"<< endl;
     cout << "|            2. Login               |"<< endl;
     cout << "|            3. Change password     |"<< endl;
     cout << "|____________4. End Program_________|"<< endl;

     do{
        cout << endl << endl;
        cout << "Enter your name: ";
        cin >> a;
        
        switch (a)
        {
        case 1:
            cout << "__________________________________" << endl;
            cout << "|-------------Register-----------|" << endl;
            cout << "|________________________________|" << endl;
            cout << "Please enter username: ";
            cin >> name;
            cout << "Please enter the password: ";
            cin >> password0;
            cout << "Please enter your age: ";
            cin >> age;

            ofstream of1;
            of1.open("file.txt");
            if(of1.is_open()){
                of1 << name << "\n";
                of1 << password0 ;
                cout << "Registration Successful\n";
            }

            break;

        case 2:
            
            i = 0;

            cout << "____________________________\n";
            cout << "|---------Login------------|\n"; 

            ifstream of2;
            of2.open("file.txt");
            cout << "Please enter the user name: ";
            cin >> user;
            cout << "Please enter the password: ";
            cin >> pass;  
              
            if(of2.is_open() {
                {
                    while(of2.)
                }
            })

            break;
        }
     } while(i);
}
