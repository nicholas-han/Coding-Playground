////
////  1 - Two Sum - Easy.cpp
////  CPlusPlus
////
////  Created by Nicholas Han on 7/21/19.
////  Copyright © 2019 Nicholas Han. All rights reserved.
////
//
//#include <vector>
//#include <iterator>
//#include <unordered_map>
//#include <algorithm>
//
//class TwoSum {
//public:
//    // 1. Two Sum (Easy)
//    // Given an array of integers, return indices of the two numbers such that they add up to a specific target.
//    // You may assume that each input would have exactly one solution, and you may not use the same element twice.
//
//    // Brute Force O(n^2), O(1)
//    std::vector<int> twoSum_bf(std::vector<int>& nums, int target) {
//        std::vector<int>::iterator it = nums.begin();
//        for(int i=0, n=nums.size(); i < n; ++i) {
//            ++it;
//            std::vector<int>::iterator it_local = std::find(it, nums.end(), target-nums[i]);
//            if(it_local != nums.end()) {
//                int j = i + 1 + std::distance(it, it_local);
//                return std::vector<int>{i, j};
//            }
//        }
//        throw new std::invalid_argument("No two sum solution");
//    }
//
//    // Hash Map O(n), O(n)
//    std::vector<int> twoSum(std::vector<int>& nums, int target) {
//        std::unordered_map<int, int> myMap;
//        for(int i=0, n=nums.size(); i < n; ++i) {
//            if(myMap.find(target - nums[i]) == myMap.end())
//                myMap.insert(std::pair<int, int>(nums[i], i));
//            else
//                return std::vector<int>{myMap[target - nums[i]], i};
//        }
//        throw new std::invalid_argument("No two sum solution");
//    }
//
//    // 15. Three Sum (Medium)
//    // Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0?
//    // Find all unique triplets in the array which gives the sum of zero.
//
//};
//
//class Solution {
//public:
//    int numEquivDominoPairs(std::vector<std::vector<int>>& dominoes) {
//        std::unordered_map<std::pair<int, int>, int> myMap;
//        for(auto x : dominoes) {
//            std::pair<int, int> new_pair;
//            new_pair.first = x[0] < x[1] ? x[0] : x[1];
//            new_pair.second = x[0] < x[1] ? x[1] : x[2];
//            if(myMap.find(new_pair) != myMap.end()) {
//                myMap[new_pair] = 1;
//            } else {
//                ++myMap[new_pair];
//            }
//        }
//        int total = 0;
//        for (std::unordered_map<std::pair<int, int>, int>::iterator it = myMap.begin(); it != myMap.end(); ++it) {
//            int n = it->second;
//            total += n * (n - 1) / 2;
//        }
//        return total;
//    }
//};
