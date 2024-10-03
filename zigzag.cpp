#include <iostream>
#include <vector>
using namespace std;

string zigzagConvert(string s, int numRows) {
    if (numRows == 1) return s;  // If there is only 1 row, the string remains the same

    // Create a vector of strings to represent rows
    vector<string> rows(min(numRows, int(s.size())));
    int curRow = 0;
    bool goingDown = false;

    // Traverse the input string character by character
    for (char c : s) {
        rows[curRow] += c;  // Add the character to the current row

        // If we are at the top or bottom row, reverse the direction
        if (curRow == 0 || curRow == numRows - 1) {
            goingDown = !goingDown;
        }

        // Move to the next row
        curRow += goingDown ? 1 : -1;
    }

    // Combine all rows into a single string
    string result;
    for (string row : rows) {
        result += row;
    }

    return result;
}

int main() {
    string s;
    int numRows;

    // Input the string and number of rows
    cout << "Enter the string: ";
    cin >> s;
    cout << "Enter the number of rows: ";
    cin >> numRows;

    // Get the zigzag converted string
    string result = zigzagConvert(s, numRows);

    // Output the result
    cout << "Zigzag Conversion: " << result << endl;
    return 0;
}
