#ifndef LongestPalindrome_h
#define LongestPalindrome_h

#include <string>

#include "Problem.h"

using namespace std;


class LongestPalindrome : public Problem {
public:
    string longestPalindrome(string s);
    
    void load();
    void solve();
    void print();
    
private:
    string word, wordPalindrome;

};

#endif /* LongestPalindrome_h */
