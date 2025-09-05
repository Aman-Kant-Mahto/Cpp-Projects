#include <iostream>

using namespace std;

int len(string s) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

string reverseString(int length, string s) {
    // Create a new string to hold the reversed version
    string y = "";

    // Reverse the string by appending characters from the end
    for (int i = length - 1; i >= 0; i--) {
        y += s[i];  // Add characters in reverse order
    }

    // Print the original and reversed strings
    cout << "Original string: " << s << endl;
    cout << "Reversed string: " << y << endl;

    return y;  // Return the reversed string
}

int main() {
    string s = "hello world";           // Original string
    int length = len(s);                // Get the length of the string
    reverseString(length, s);           // Call the reverse function

    return 0;                           // Successful execution
}

