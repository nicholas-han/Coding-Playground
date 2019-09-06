#include <iostream>
#include <string>
#include <vector>

#include "toolkit.h"
#include "Problem.h"

#include "ZigZag.h"
#include "LongestPalindrome.h"


int main(int argc, const char * argv[]) {
    std::vector<Problem*> problems;
    problems.push_back(new LongestPalindrome());
    for(auto x : problems)
        x->run();
    
    return 0;
}
