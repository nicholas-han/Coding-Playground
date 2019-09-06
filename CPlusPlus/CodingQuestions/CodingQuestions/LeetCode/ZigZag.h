#ifndef ZigZag_h
#define ZigZag_h

#include <string>

#include "Problem.h"

using namespace std;


class ZigZag : public Problem {
public:
    string convert(string s, int numRows);

    void load();
    void solve();
    void print();

private:
    string word, wordZigZag;
    int numRows;

};






#endif /* ZigZag_h */
