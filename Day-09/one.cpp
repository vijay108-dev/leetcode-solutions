#include<iostream>
using namespace std;
int maxDistance(vector<int>& position, int m)
{
    sort(position.begin(), position.end());
    int n= position.size();
    int start = 1;
    int end= position[n-1] - position[0];
    int ans =0;
    while(start<=end)
     {
        int mid = start + (end - start) / 2;

        int count = 1;
        int last = position[0];

        for(int i = 1; i < n; i++) 
        {
            if(position[i] - last >= mid) {
                count++;
                last = position[i];
            }
        }

        if(count >= m) 
        {
            ans = mid;
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return ans;
}
int main(){
    vector<int> position = {1, 2, 3, 4, 7};
    int m=3;
    cout<<maxDistance(position,m)<<endl;
    return 0;
}
//Time Complexity = O(n log n)
//space complexity = O(1)

//1552. Magnetic Force Between Two Balls