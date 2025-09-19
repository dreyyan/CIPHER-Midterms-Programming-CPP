// ===============================
// 🎯 Escape Sequences in C++
// ===============================
// - Special characters inside strings
// - Used for formatting or representing characters
//   that are hard to type directly

/*
Escape   Meaning              Example / Application
---------------------------------------------------
\n       Newline              Moves text to the next line
\t       Horizontal Tab       Adds spacing (like a tab)
\\       Backslash            Prints a backslash "\"
\'       Single Quote         Prints a single quote '
\"       Double Quote         Prints a double quote "
\r       Carriage Return      Moves cursor to line start (overwrites text)
\b       Backspace            Erases previous character
\a       Alert / Bell Sound   Makes a beep sound (if supported)
\0       Null Character       Marks end of a C-style string
*/

// 🧑‍💻 Example program:
#include <iostream>
using namespace std;

int main() {
    cout << "Hello\nWorld!" << endl;   // newline
    cout << "A\tB\tC" << endl;        // tab
    cout << "This is a backslash: \\" << endl;
    cout << "She said: \"C++ is fun!\"" << endl;
    cout << "Single quote: \'X\'" << endl;

    return 0;
}