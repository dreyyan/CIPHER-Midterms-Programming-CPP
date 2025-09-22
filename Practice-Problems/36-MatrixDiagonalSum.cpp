// Problem #36 [Arrays]: Matrix Diagonal Sum
// INSTRUCTIONS:
// Write a program that reads a square matrix of size n (1 <= n <= 10) and calculates the sum of its 
// main diagonal (top-left to bottom-right) using nested loops. Print the sum.

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int matrix[10][10];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];
    // [Your code here]
}

// Example Input: 3
// 1 2 3
// 4 5 6
// 7 8 9
// Example Output: 15
// Example Input: 2
// 1 2
// 3 4
// Example Output: 5