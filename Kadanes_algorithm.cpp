#include<iostream>
using namespace std;

int main(){
    int arr[] = {9,-1,0,3,5,-1,4,5,-10,-2,-12,30};
   
    int sum = 0;
    int max_sum = 0;
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        sum += arr[i];
        if(sum<0){
            sum = 0;
        }
        
        max_sum = max(sum, max_sum);
    }
    cout<<max_sum;

    return 0;
}