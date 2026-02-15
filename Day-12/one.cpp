#include<iostream>
using namespace std;
    string longestCommonPrefix(vector<string>& strs) 
    {
        if(strs.size()==0) 
            return "";
        string prefix="";
        //First string ke characters check karega
        for(int i=0;i<strs[0].size();i++){
            char currChar=strs[0][i];

            //Har string me compare karega
            for(int j=1;j<strs.size();j++){
                // Agar string choti hai ya character match nahi kiya
                if(i>=strs[j].size() || strs[j][i]!=currChar){
                    return prefix;
                }
            }
            // Agar sab me common hua
            prefix+= currChar;
        }
        return prefix;
    }
int main(){
    int n;
    cin>>n;
    vector<string>strs(n);
    for (int i=0;i<n;i++){
        cin>>strs[i];
    }
    cout<<longestCommonPrefix(strs)<<endl;

    return 0;
}
//Time Complexity:O(N*M)
//Space Complexity:O(1) 