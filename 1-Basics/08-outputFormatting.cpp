#include <iostream>
using namespace std;

int main() {
    cout << "Roses are red," << endl;        // endl → new line + flush
    cout << "Violets are blue," << '\n';     // '\n' → new line only
    cout << "Sugar is sweet,\n"              // '\n' → new line
         << "and so are you" << "\n";        // another new line
    return 0;
}

// ===============================
// 🌸 endl vs. \n (newline)
// ===============================
// Both create a new line when printing text.
//
// endl
// - Adds a newline AND flushes (forces output immediately)
// - Slower if used many times
//
// \n
// - Adds a newline only
// - Faster in most cases
//
// 👉 Recommendation: Use '\n' for performance unless you need to force the output as soon as possible.