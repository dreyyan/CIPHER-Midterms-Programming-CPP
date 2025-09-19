#include <iostream>
using namespace std;

// A function is like a "mini-program" inside your program.
// It has a name, can take input, and can give back output.

// Example 1: A function with NO input and NO output
void sayHello() {
    cout << "Hello from a function!\n";
}

// Example 2: A function with input but NO output
void greetUser(string name) {
    cout << "Hi " << name << "! Welcome to C++.\n";
}

// Example 3: A function with input AND output
int addNumbers(int a, int b) {
    return a + b; // send back the result
}

int main() {
    // Call (use) the functions
    sayHello();

    greetUser("Alice");
    greetUser("Bob");

    int sum = addNumbers(5, 3);
    cout << "5 + 3 = " << sum << "\n";

    return 0;
}

/*
📝 Summary:
- Functions help us REUSE code.
- We can "call" them many times instead of writing the same code again.
- Structure:
    returnType functionName(parameters) {
        // code to run
    }
*/