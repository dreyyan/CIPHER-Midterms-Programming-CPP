#include <iostream>
using namespace std;

int main() {
    int number;

    // do-while = run code at least once, then check condition
    do {
        cout << "Enter a positive number: ";
        cin >> number;
    } while (number <= 0);

    cout << "Great! You entered: " << number << "\n";
    return 0;
}