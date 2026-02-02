/*
    Problem: 1. Two Sum
    Platform: LeetCode
    Approach: Brute Force

    Idea:
    - Check every pair of elements in the array
    - For each index i, try all j > i
    - If nums[i] + nums[j] equals the target,
      return the indices i and j
    - The problem guarantees exactly one valid solution

    Time Complexity: O(n^2)
    Space Complexity: O(1)
*/

#include<iostream>
#include <vector>
using namespace std;

    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int n=nums.size();

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    return{i,j};
                }
            }
        }

        return {};
    }


int main()
{
vector<int> nums;
nums.push_back(2);
nums.push_back(7);
nums.push_back(11);
nums.push_back(15);

int target;
target = 9;

vector<int> ans;
ans=twoSum(nums, target);

cout<<ans[0]<<" ";
cout<<ans[1]<<" ";

    return 0;
}

