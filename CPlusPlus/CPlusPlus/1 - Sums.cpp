//
//  1 - Two Sum - Easy.cpp
//  CPlusPlus
//
//  Created by Nicholas Han on 7/21/19.
//  Copyright © 2019 Nicholas Han. All rights reserved.
//

#include <vector>
#include <iterator>
#include <unordered_map>
#include <algorithm>

class Solution1_1 {
public:
    // 1. Two Sum (Easy)
    // Given an array of integers, return indices of the two numbers such that they add up to a specific target.
    // You may assume that each input would have exactly one solution, and you may not use the same element twice.
    
    // Brute Force O(n^2), O(1)
    std::vector<int> twoSum1(std::vector<int>& nums, int target) {
        std::vector<int>::iterator it = nums.begin();
        for(int i=0, n=nums.size(); i < n; ++i) {
            ++it;
            std::vector<int>::iterator it_local = std::find(it, nums.end(), target-nums[i]);
            if(it_local != nums.end()) {
                int j = i + 1 + std::distance(it, it_local);
                return std::vector<int>{i, j};
            }
        }
        throw new std::invalid_argument("No two sum solution");
    }
    
    // Hash Map O(n), O(n)
    std::vector<int> twoSum2(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> myMap;
        for(int i=0, n=nums.size(); i < n; ++i) {
            if(myMap.find(target - nums[i]) == myMap.end())
                myMap.insert(std::pair<int, int>(nums[i], i));
            else
                return std::vector<int>{myMap[target - nums[i]], i};
        }
        throw new std::invalid_argument("No two sum solution");
    }
    
    // 15. Three Sum (Medium)
    // Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0?
    // Find all unique triplets in the array which gives the sum of zero.
    
};

