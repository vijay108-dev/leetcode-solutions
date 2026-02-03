/*
    Problem: 3637. Trionic Array I
    Platform: LeetCode
    Approach: One Pass (Three-Phase Scan)

    Idea:
    - Traverse the array using a single index
    - First, check for a strictly increasing sequence
    - Then, check for a strictly decreasing sequence
    - Finally, check for a strictly increasing sequence again
    - Each phase must contain at least one valid comparison
    - If the traversal reaches the last index after all three phases,
      the array is considered trionic

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include<iostream>
#include<vector>
using namespace std;
    bool isTrionic(vector<int>& nums){
        int n=nums.size();
        int i=0;
        //strictly increasing
        //Move forward while the next element is greater than the current one
        while(i+1<n && nums[i] < nums[i+1]){
            i++;
        }
        //If no increasing part exists, it cannot be trionic
        if(i==0) 
        return false;

        //Store the end index of the first increasing part
        //strictly decreasing
        int p = i;
        //Move forward while the next element is smaller than the current one
        while(i+1<n && nums[i]>nums[i+1]){
            i++;
        }
        //If no decreasing part exists, it is invalid
        if(i==p) 
        return false;

        //important line third increasing must exist i miss this line
        if(i ==n-1)
            return false;

        //strictly increasing again
        //Move forward while the next element is greater than the current one
        while(i+1<n && nums[i] < nums[i+1]){
            i++;
        }

        //Valid trionic array only if we reach the last index
        return i == n-1;
    }


int main() {
    vector<int> nums ={1,3,5,4,2,6};
    if(isTrionic(nums))
        cout << "true"<<endl;
    else
        cout << "false"<<endl;

    return 0;
}
