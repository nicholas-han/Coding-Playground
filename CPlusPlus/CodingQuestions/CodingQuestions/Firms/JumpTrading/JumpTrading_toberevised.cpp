#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int factorial(int n);
vector<int> solution(int n, int k);

int main(int argc, const char * argv[]) {
    int n, k;
    cout << "n = ";
    cin >> n;
    cout << "k = ";
    cin >> k;
    cout << "permutation: ";
    for (int i : solution(n, k)) cout << i;
    cout << endl;

    return 0;
}

vector<int> solution(int n, int k) {
    vector<int> permutation(n);
    vector<int> numsLeft(n);
    for (int i = 0; i < n; ++i) numsLeft[i] = i;
    int localIndex, nextFactorial;
    for (int i = 0; i < n; ++i) {
        nextFactorial = factorial(n - i - 1);
        localIndex = (k - 1) / nextFactorial;
        permutation[i] = numsLeft[localIndex];
        numsLeft.erase(numsLeft.begin() + localIndex);
        k %= nextFactorial;
    }
    return permutation;
    
}

int factorial(int n) {
    int prod = 1; // 0! = 1, 1! = 1
    for (int i = 2; i <= n; ++i) prod *= i;
    return prod;
}
