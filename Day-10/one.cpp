#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findContentChildren(vector<int>& g, vector<int>& s) 
{
    //Sort greed array (children)
    sort(g.begin(), g.end());

    //Sort cookies size array
    sort(s.begin(), s.end());

    int start = 0; // pointer for children (greed array)
    int end = 0;   // pointer for cookies (size array)
    int count = 0; // number of satisfied children

    //Traverse both arrays using two pointers
    while(start < g.size() && end < s.size()) 
    {

        // If cookie size is enough to satisfy child
        if(s[end] >= g[start]) 
        {
            count++;   // child is satisfied
            start++;   // move to next child
            end++;     // move to next cookie
        }
        else{
            // Cookie too small, try next bigger cookie
            end++;
        }
    }

    // Return total satisfied children
    return count;
}

int main() {
    vector<int> g = {1, 2, 3}; 
    vector<int> s = {1, 1};   
    cout<<findContentChildren(g, s)<<endl;

    return 0;
}

/*
Time Complexity (TC):
Sorting children  -> O(n log n)
Sorting cookies   -> O(m log m)
Two pointer scan  -> O(n + m)
Total TC          -> O(n log n)

Space Complexity (SC):
No extra data structures used
Only constant variables -> O(1) extra space
*/


