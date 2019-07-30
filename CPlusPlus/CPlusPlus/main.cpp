//
//  main.cpp
//  CPlusPlus
//
//  Created by Nicholas Han on 7/21/19.
//  Copyright © 2019 Nicholas Han. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

template<typename T>
std::vector<T> load_vector(std::string s) {
    std::vector<T> myVec;
    std::stringstream ss;
    ss << s;
    std::string temp_str;
    T temp_val;
    while (!ss.eof()) {
        ss >> temp_str;
        if (std::stringstream(temp_str) >> temp_val)
            myVec.push_back(temp_val);
        temp_str = "";
    }

    return myVec;
}

template<typename T>
T load_value(std::string s) {
    T myVal = 0;
    return myVal;
}


int main(int argc, const char * argv[]) {
    char start_over;
    do {
        std::cout << "=======================" << std::endl;
        std::cout << "Question List:" << std::endl;
        std::cout << "1. Two Sums" << std::endl;

        std::cout << "Please select question:" << std::endl;

        int question_number;
        std::cin >> question_number;
        switch(question_number) {
            case 1 : {
                std::string s = "[1,2,3,4]";
                std::vector<int> nums = load_vector<int>(s);
                int target = load_value<int>(s);
                std::cout << nums.size() << std::endl;
//                TwoSum().twoSum(nums, target);
                std::cout << "Failed: 10/12 test cases passed." << std::endl;
                break;
            }
            default : std::cout << "Invalid question index." << std::endl;
        }
        std::cout << "Do you want to start over? (y/n)" << std::endl;
        std::cin >> start_over;
        while(start_over != 'y' && start_over != 'n') {
            std::cout << "Invalid Input. Do you want to start over? (y/n)" << std::endl;
        }

    } while(start_over == 'y');
    std::cout << "Thank you for using." << std::endl;
    return 0;
}
