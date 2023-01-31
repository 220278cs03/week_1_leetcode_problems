//
//  main.cpp
//  week_1
//
//  Created by Gulnoza Sabirjonova on 31/01/23.
//

#include <iostream>
#include<vector>
using namespace std;

int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
    int count = 0;
    for(int i=0; i<startTime.size(); i++){
        if(startTime[i] <= queryTime && endTime[i] >= queryTime){
            count++;
        }
    }
    return count;
    }

int sumOfUnique(vector<int>& nums) {
    int sum=0;
    bool fl;
    for(int i=0; i<nums.size(); i++){
        fl = false;
        for(int j=0; j<nums.size(); j++){
            fl = true;
        }
        if(fl == false){
            sum+=nums[i];
        }
    }
    return sum;
}

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int> result;
    for(int i=0; i<nums.size(); i++){
        int count = 0;
        for(int j=0; j<nums.size(); j++){
            if(nums[i] > nums[j] && i!=j){
                count++;
            }
        }
        result.push_back(count);
    }
    return result;
    }

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> result;
    for(int i=0; i<nums.size(); i++){
        for(int j=0; j<nums.size(); j++){
            if(nums[i] + nums[j] == target && i!=j)
                return {i,j};
        }
    }
    return {};
}

int main() {
    vector<int> nums = {2,7,11,15, 2};
    vector<int> result = twoSum(nums, 9);
    for(auto item : result){
        cout << item << " ";
    }
    return 0;
}
