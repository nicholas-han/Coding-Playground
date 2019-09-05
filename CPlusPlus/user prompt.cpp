#include <iostream>
#include <string>
#include <vector>

#include "toolkit.h"
#include "LeetCode/TwoSum.h"

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
                TwoSum test_object;
                std::vector<int> nums = test_object.load_nums();
                int target = test_object.load_target();
                std::cout << test_object.twoSum(nums, target) << std::endl;
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
