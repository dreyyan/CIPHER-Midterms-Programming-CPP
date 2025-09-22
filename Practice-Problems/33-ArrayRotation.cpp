// Problem #33 [Arrays]: Array Rotation
// INSTRUCTIONS:
// Write a program that reads an array of n integers (1 <= n <= 100) and an integer k (0 <= k <= n), 
// and rotates the array to the right by k positions using a loop. Print the rotated array.

#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int arr[100];
    for (int i = 0; i < n; i++) cin >> arr[i];
    // [Your code here]
}

// Example Input: 5 2 1 2 3 4 5
// Example Output: 4 5 1 2 3
// Example Input: 3 1 10 20 30
// Example Output: 30 10 20