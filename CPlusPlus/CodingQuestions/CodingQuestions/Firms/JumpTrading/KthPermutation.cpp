#include "KthPermutation.h"

#include <iostream>
#include <string>
#include <vector>

#include"toolkit.h"


using namespace std;


vector<int> KthPermutation::solution(int n, int k) {
    k -= 1;
    vector<int> permutation(n);
    vector<int> numsLeft(n);
    for (int i = 0; i < n; ++i) numsLeft[i] = i + 1;
    int localIndex, nextFactorial;
    for (int i = 0; i < n; ++i) {
        nextFactorial = factorial(n - i - 1);
        localIndex = k / nextFactorial;
        permutation[i] = numsLeft[localIndex];
        numsLeft.erase(numsLeft.begin() + localIndex);
        k %= nextFactorial;
    }
    return permutation;
}

int KthPermutation::factorial(int n) {
    int prod = 1; // 0! = 1, 1! = 1
    for (int i = 2; i <= n; ++i) prod *= i;
    return prod;
}

void KthPermutation::load() {
    n = loadInt("n = ");
    k = loadInt("k = ");
}

void KthPermutation::solve() {
    outputPermutation = solution(n, k);
}

void KthPermutation::print() {
    cout << "The " << k;
    if (k % 10 == 1) cout << "-st";
    else if (k % 10 == 2) cout << "-nd";
    else if (k % 10 == 3) cout << "-rd";
    else cout << "-th";
    cout << " permutation: " << outputPermutation << endl;
}

template <typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& v)
{
    os << "[";
    for (int i = 0, n = (int)v.size(); i < n; ++i) {
        os << v[i];
        if (i != v.size() - 1) os << ", ";
    }
    os << "]";
    return os;
}
