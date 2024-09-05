#ifndef KthPermutation_h
#define KthPermutation_h

#include <string>
#include <vector>

#include "Problem.h"

using namespace std;


class KthPermutation : public Problem {
public:
    vector<int> solution(int n, int k);
    int factorial(int n);
    void load();
    void solve();
    void print();
    
private:
    vector<int> outputPermutation;
    int n, k;
    
};


#endif /* KthPermutation_h */
