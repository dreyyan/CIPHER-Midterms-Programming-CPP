#include <iostream> // for cout
#include <string>   // for string
#include <cstdio>   // for printf (C-style output)

using namespace std;

int main() {
    // ============================
    // 📌 Basic Output (C++ style)
    // ============================
    cout << "Hello!" << endl;

    // ============================
    // 📌 Output with Variables
    // ============================
    string name = "John";
    cout << "My name is " << name << "!" << endl;

    // ============================
    // 📌 C-style Output (printf)
    // ============================
    // printf is from the C language.
    // It's useful for advanced formatting (numbers, decimals, etc.)
    printf("It's nice to meet you, %s!\n", name.c_str()); 
    // NOTE: .c_str() converts C++ string -> C-style string

    return 0;
}

/*
📝 Summary:
- Use cout (C++ style) for most printing.
- Use printf (C style) if you need precise formatting.
- endl = new line + flush stream
- \n = new line (faster, no flu