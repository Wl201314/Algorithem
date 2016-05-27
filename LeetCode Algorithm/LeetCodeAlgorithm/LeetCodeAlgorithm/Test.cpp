//
//  Test.cpp
//  LeetCodeAlgorithm
//
//  Created by wjl on 16/5/14.
//  Copyright © 2016年 Martin. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <iostream>
#include <vector>
#include <set>
using namespace std;
using std::cout;

int missingNumber(vector<int>& nums) {
    
    if (nums.size() < 1) {
        return -1;
    }
    
    int result = 0;
    for (size_t i = 0; i < nums.size(); i++) {
        result ^= nums[i] ^ i;
    }
    result ^= nums.size();
    return result;
}


int main(){
 
    vector<int> vec(10);
    for (int i = 0; i < 10; i++) {
        vec[i] = i;
    }
    
    vec.erase(vec.begin() + 5);
    
    int result = missingNumber(vec);
    
    cout<< result <<endl;
}
