#include "ZigZag.h"

#include <iostream>
#include <string>
#include <vector>

#include"toolkit.h"


using namespace std;


string ZigZag::convert(string s, int numRows) {
    if (numRows == 1) return s;
    
    int actualNumRows = min(numRows, int(s.length()));
    vector<string> rows(actualNumRows);
    int curRow = 0;
    bool goingDown = false;
    for (char c : s) {
        rows[curRow] += c;
        if (curRow == 0 || curRow == numRows - 1) goingDown = !goingDown;
        curRow += goingDown ? 1 : -1;
    }
    
    string zigZagStr;
    for (string row : rows) zigZagStr += row;
    return zigZagStr;

}

void ZigZag::load() {
    word = loadString("String: ");
    numRows = loadInt("Number of rows: ");

}

void ZigZag::solve() {
    wordZigZag = convert(word, numRows);

}

void ZigZag::print() {
    cout << "Output: " << wordZigZag << endl;

}
