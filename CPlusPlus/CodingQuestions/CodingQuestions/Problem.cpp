#include "Problem.h"

#include <iostream>


void Problem::run() {
    printBorder('=');

    load();
    solve();
    printBorder('-');
    print();

    printBorder('=');

}

void Problem::printBorder(char type='=') {
    if (type == '-')
        std::cout << "----------------------------" << std::endl;
    else
        std::cout << "============================" << std::endl;

}
