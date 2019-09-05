#include "toolkit.h"

#include <iostream>
#include <vector>


template <typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& v)
{
    os << "[";
    for (int i = 0; i < v.size(); ++i) {
        os << v[i];
        if (i != v.size() - 1)
            os << ", ";
    }
    os << "]\n";
    return os;

}


std::string loadString(std::string msg) {
    std::string myStr;
    std::cout << msg;
    std::cin >> myStr;
    return myStr;

}


int loadInt(std::string msg) {
    int myInt;
    std::cout << msg;
    std::cin >> myInt;
    return myInt;

}
