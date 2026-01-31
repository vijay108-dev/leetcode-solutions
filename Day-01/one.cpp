/*
    Problem: 744. Find Smallest Letter Greater Than Target
    Platform: LeetCode
    Approach: Binary Search (Upper Bound style)

    Idea:
    - Letters array is sorted.
    - Find the first element strictly greater than target.
    - If no such element exists, return letters[0] (wrap-around case).

    Time Complexity: O(log n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution 
{
public:
    char nextGreatestLetter(vector<char>& letters, char target) 
    {
        int start=0;
        int end =letters.size()-1;

        char ans =letters[0];// wrap-around default

        while(start<=end) 
        {
            int mid=start + (end - start) / 2;

            if(letters[mid]>target){
                ans = letters[mid];
                end= mid-1;// search left side
            }else{
                start= mid +1;// search right side
            }
        }

        return ans;
    }
};

int main(){
    Solution sol;
    vector<char> letters = {'x','x','y','y'};
    char target = 'z';

    cout<<sol.nextGreatestLetter(letters, target)<<endl;
}
