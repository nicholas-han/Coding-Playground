#ifndef toolkit_h
#define toolkit_h

#include <iostream>
#include <string>


template <typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& v);

std::string loadString(std::string msg);
int loadInt(std::string msg);

#endif /* toolkit_h */
