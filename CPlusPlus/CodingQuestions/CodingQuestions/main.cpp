#include <iostream>
#include <string>
#include <vector>

#include "toolkit.h"
#include "Problem.h"

#include "ZigZag.h"


int main(int argc, const char * argv[]) {
    std::vector<Problem*> problems;
    problems.push_back(new ZigZag());
    for(auto x : problems)
        x->run();
    
    return 0;
}
