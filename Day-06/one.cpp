//Time Complexity = O(logn)
//Space Complexity = O(1)
#include <iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cout<<"Enter the number of elements in array"<<" ";
    cin>>n;
    cout<<"Enter elements in the array:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter element to search: ";
    cin >>target;
    int first=-1, last=-1;

    // First Position
    int start=0,end=n-1;
    while(start <= end) {
        int mid = (start + end)/2;

        if(arr[mid] == target){
            first = mid;
            end = mid - 1;   //left side
        }
        else if(arr[mid]<target){
            start= mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    //Last Position
    start=0;
    end=n - 1;
    while(start <=end){
        int mid = (start + end)/2;

        if (arr[mid] == target){
            last= mid;
            start = mid +1; //right side
        }
        else if (arr[mid] <target) {
            start = mid +1;
        }
        else{
            end =mid -1;
        }
    }

    cout<<first<<" "<<last<<" ";

    return 0;
}