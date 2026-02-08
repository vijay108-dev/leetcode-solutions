#include <iostream>   
using namespace std;
// Function to reverse an integer number
int reverse(int x){
    int ans=0;// This will store the reversed number
    //Loop until all digits of x are processed
    while (x!=0){
        int rem=x%10; //Get the last digit of x
        x/=10;//Remove the last digit from x

        // Check for integer overflow before multiplying by 10
        if(ans>INT_MAX/10 || ans<INT_MIN/10)
            return 0;//Return 0 if overflow happens

        ans = ans*10+rem; 
    }

    return ans;//Return the final reversed number
}

int main(){
    int x;//Declare an integer variable
    cin>>x;//Take input from user
    cout<<reverse(x)<<endl;//Call reverse function and print result
}

//Time Complexity = O(n)
//Space Complexity = O(1) 