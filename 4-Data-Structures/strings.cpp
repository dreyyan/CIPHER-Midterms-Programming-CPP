#include <iostream>
#include <string> // include string library
using namespace std;

int main() {
    // 📌 Declaring strings
    string name = "Alice";
    cout << "Hello, " << name << "!\n";

    // 📌 Getting input from the user
    string city;
    cout << "Where do you live? ";
    cin >> city; // reads one word (stops at space)
    cout << "You live in " << city << ".\n";

    // 📌 Using getline() for full sentences
    string sentence;
    cout << "Tell me your favorite quote: ";
    cin.ignore();              // clear leftover input
    getline(cin, sentence);    // read full line
    cout << "Nice! You said: \"" << sentence << "\"\n";

    // 📌 String operations
    string food = "Pizza";
    string drink = "Juice";
    string order = food + " and " + drink; // concatenation (joining)
    cout << "Order: " << order << "\n";

    cout << "Length of food: " << food.length() << "\n"; // number of characters
    cout << "First letter of drink: " << drink[0] << "\n"; // indexing (like arrays)

    return 0;
}

/*
📝 Summary:
- Use `string` for words and sentences.
- `cin` reads one word, `getline()` reads full lines.
- Strings can be combined (+), measured (.length()), and accessed by index [].
*/