#include <iostream>
using namespace std;

int main() {
    int countdown = 5;

    // while loop = repeat WHILE condition is true
    cout << "Countdown:\n";

    while (countdown > 0) {
        cout << countdown << " ";
        countdown--; // subtract 1 each time
    }

    cout << "🚀 Blast off!\n";
    return 0;
}