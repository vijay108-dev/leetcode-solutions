#include<iostream>
using namespace std;
int findLengthOfLCIS(vector<int>& nums) 
{
    int n=nums.size();
    if(n == 0) 
    return 0;
    int curr =1;
    int ans =1;
    for(int i=1;i<n;i++) 
    {
        if (nums[i]>nums[i-1]){
            curr++;
        }else{
            curr = 1;
        }
        ans = max(ans, curr);
    }
    return ans;
}

int main() {
    vector<int>nums={1,3,5,4,7}; 
    cout<<"Longest Continuous Increasing Subsequence Length = "<< findLengthOfLCIS(nums)<<endl;

    return 0;
}
//TC = O(n)
//SC = O(1)