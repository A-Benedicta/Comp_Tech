#include <iostream> 
using namespace std;


// QUESTION 18:
// Write a C++ program to convert binary to decimal.


int main() {
    
    string bin;

    cout << "Enter a binary number: ";
    cin >> bin;

    bool valid = true;
    if (bin.empty()) valid = false;

    for (char c : bin) {
        if (c != '0' && c != '1') {
            valid = false;
            break;
        }
    }

    if (!valid) {
        cout << "\nInvalid binary input." << endl;
        return 0;
    }

    unsigned long long dec = 0;
    for (char c : bin) {
        dec = dec * 2 + (c - '0');
    }

    cout << "\nDecimal: " << dec << endl;
    return 0;
}



