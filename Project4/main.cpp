#include <iostream>
using namespace std;

// Function to calculate the length of a string recursively
int calculateLength(char* str) {
    // Base case: if the current character is '\0', return 0
    if (*str == '\0') {
        return 0;
    }
    else {
        // Recursive call: add 1 and move to the next character
        return 1 + calculateLength(str + 1);
    }
}

int main() {
    char str[] = "Hello, World!";
    // Calculate and print the length of the string
    cout << "Length of the string: " << calculateLength(str) << endl;
    return 0;
}
