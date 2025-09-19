#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // if = do something only if condition is true
    if (number > 0) {
        cout << "This is a positive number.\n";
    }

    // if-else = pick one of two paths
    if (number % 2 == 0) {
        cout << "This number is EVEN.\n";
    } else {
        cout << "This number is ODD.\n";
    }

    return 0;
}