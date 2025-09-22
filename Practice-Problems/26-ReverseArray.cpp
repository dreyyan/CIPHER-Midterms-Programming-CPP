// Problem #26 [Arrays]: Reverse Array
// INSTRUCTIONS:
// Write a program that reads an array of n integers (1 <= n <= 100) and reverses it in-place using a 
// loop. Print the reversed array. Use comparison operators to swap elements.

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++) cin >> arr[i];
    // [Your code here]
}

// Example Input: 5 1 2 3 4 5
// Example Output: 5 4 3 2 1
// Example Input: 3 10 20 30
// Example Output: 30 20 10