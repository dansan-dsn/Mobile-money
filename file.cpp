
#include <iostream>
#include <fstream>
using namespace std;

int main() {

    int value , sum;
    ofstream file;
    ifstream ifile;
    file.open("file.txt");
    ifile.open("file.txt");
    cout << "Enter the maximum value: " ;
    cin >> value;
    file << value << endl;

    cout << "Evaluate numbers and value \n";
    cout << "Enter any number : ";
    cin >> sum;

    ifile >> value;
    cout << value + sum;
   return 0;
}