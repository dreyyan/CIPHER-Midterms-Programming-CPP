#include <iostream>
using namespace std;

int main() {
    // 📌 What is an array?
    // An array stores multiple values of the SAME type in one variable.

    // Example: declare and initialize
    int numbers[5] = {10, 20, 30, 40, 50};

    // Access elements using index (starts at 0)
    cout << "First element: " << numbers[0] << "\n";
    cout << "Third element: " << numbers[2] << "\n";

    // Change a value
    numbers[1] = 25;
    cout << "Second element after change: " << numbers[1] << "\n";

    // Loop through an array
    cout << "All elements: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << "\n";

    // 📌 Array with strings
    string fruits[3] = {"Apple", "Banana", "Cherry"};
    cout << "Favorite fruit: " << fruits[2] << "\n";

    return 0;
}

/*
📝 Summary:
- Array = collection of values with the SAME type.
- Index starts at 0.
- Access: array[index]
- Arrays have fixed size (cannot grow/shrink).
*/