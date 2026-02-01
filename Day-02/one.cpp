/*
    Problem: 3010. Divide an Array Into Subarrays With Minimum Cost I
    Platform: LeetCode
    Approach: Brute Force (Observation-based)

    Idea:
    - We need to divide the array into 3 contiguous non-empty subarrays.
    - The cost of a subarray is its first element.
    - The first subarray always starts at index 0, so nums[0] is always included.
    - We only need to choose starting indices for the 2nd and 3rd subarrays.
    - Try all valid pairs (i, j) such that:
        0 < i < j < n
    - Minimize: nums[0] + nums[i] + nums[j]

    Time Complexity: O(n^2)
    Space Complexity: O(1)
*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution 
{
public:
    int minimumCost(vector<int>& nums) 
    {
        int n =nums.size();
        int ans =INT_MAX;
        // nums[0] is always part of the cost
        for(int i=1;i<n-1;i++) 
        {
            for(int j=i+1;j<n;j++) 
            {
                int cost =nums[0]+nums[i]+nums[j];
                ans =min(ans, cost);
            }
        }

        return ans;
    }
};

int main() 
{
    Solution sol;
    vector<int>nums={1,2,3,12};
    cout<<sol.minimumCost(nums)<<endl;
}
