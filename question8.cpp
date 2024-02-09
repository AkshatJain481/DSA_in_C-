#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {-1,4,7,2};
    int ans = INT_MIN;
    int sum = 0;
    // unoptimized approach
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        for(int j=i;j<sizeof(arr)/sizeof(int);j++){
            for(int k=i;k<=j;k++){
                sum += arr[k];
            }
            if(sum>ans){
                ans = sum;
            }
            sum = 0;
        }
    }
    cout<<ans;


    return 0;
}