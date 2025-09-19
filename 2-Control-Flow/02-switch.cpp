#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Pick a number (1, 2, or 3): ";
    cin >> choice;

    // switch = choose between many options
    switch (choice) {
        case 1:
            cout << "You picked ONE!\n";
            break;
        case 2:
            cout << "You picked TWO!\n";
            break;
        case 3:
            cout << "You picked THREE!\n";
            break;
        default:
            cout << "That’s not 1, 2, or 3.\n";
    }

    return 0;
}