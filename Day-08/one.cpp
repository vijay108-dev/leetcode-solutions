//Time Complexity = O(n log(maxPile))
//space complexity = O(1)
#include<iostream>
#include<vector>
using namespace std;
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int start = 1;
        int end = 0;
        int ans = 0;
        int n = piles.size();
        for (int i=0;i<n;i++){
            end =max(end, piles[i]);
        }
        while(start<=end){
            int mid=start+(end-start)/2;
            long long total_time = 0;

            for(int i=0;i<n;i++){
                total_time += piles[i] / mid;
                if (piles[i] % mid != 0) 
                total_time++;
            }

            if (total_time > h){
                start = mid + 1;
            } 
            else {
                ans = mid;
                end = mid - 1;
            }
        }

        return ans;
    }

int main() {
    vector<int> piles={3,6,11,7};
    int h =8;
    cout<<minEatingSpeed(piles, h)<<endl;

    return 0;
}
