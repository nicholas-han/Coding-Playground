#include "LongestPalindrome.h"

#include"toolkit.h"

string LongestPalindrome::longestPalindrome(string s) {
    if (s.length() <= 1) return s;
    int j1_opt = 0, j2_opt = 0;
    for (int i = 1, n = s.length(); i < 2 * n - 1; ++i) {
        int j1 = i % 2 == 1 ? i / 2 : i / 2 - 1;
        int j2 = i % 2 == 1 ? j1 + 1 : j1 + 2;
        while (j1 >= 0 && j2 < n && s[j1] == s[j2]) {
            --j1;
            ++j2;
        }
        ++j1;
        --j2;
        if (j2 - j1 > j2_opt - j1_opt) {
            j1_opt = j1;
            j2_opt = j2;
        }
    }
    
    string longestSubstr = s.substr(j1_opt, j2_opt - j1_opt + 1);
    return longestSubstr;
}

void LongestPalindrome::load() {
    word = loadString("String: ");
    
}

void LongestPalindrome::solve() {
    wordPalindrome = longestPalindrome(word);
    
}

void LongestPalindrome::print() {
    cout << "Output: " << wordPalindrome << endl;
    
}
