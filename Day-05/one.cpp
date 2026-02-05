/*
    Problem: 9. Palindrome Number
    Platform: LeetCode / Practice
    Approach: Full Reverse (Simple Approach)

    Idea:
    - Negative numbers can never be palindrome
    - Store the original number
    - Reverse the entire number digit by digit
    - Compare the reversed number with the original number
    - If both are equal, the number is a palindrome

    Note:
    - This approach is simple and easy to understand
    - It may cause integer overflow for very large values

    Time Complexity: O(log10(n))
    Space Complexity: O(1)
*/
#include <iostream>
using namespace std;
bool isPalindrome(int x){
    //Negative numbers are not palindrome
    if(x<0)
     return false;
    int original=x;//Store original number
    int reversed=0; //To store reversed number

    // Reverse the number
    while(x>0){
        int digit=x % 10;
        reversed=reversed * 10+digit;
        x=x /10;
    }
    // Compare original and reversed number
    return original == reversed;
}

int main(){
    int x;
    cout<<"Enter a number: "<<" ";
    cin>>x;
    if (isPalindrome(x)){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }

    return 0;
}



//it will not give you integer overfolw error
// bool isPalindrome(int x){
//     // Negative numbers and numbers ending with 0 (except 0) are not palindrome
//     if (x < 0 || (x % 10 == 0 && x != 0))
//         return false;
//     int reversedHalf = 0;
//     // Reverse only half of the number
//     while (x > reversedHalf) {
//         reversedHalf = reversedHalf * 10 + x % 10;
//         x /= 10;
//     }
//     // Even length: x == reversedHalf
//     // Odd length: x == reversedHalf / 10
//     return (x == reversedHalf || x == reversedHalf / 10);
// }