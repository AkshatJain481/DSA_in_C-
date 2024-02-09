#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr [] = {-1,2,0,10,13,0,-1};
    int sum = 0;
    int max_arr = INT_MIN;
    int array[sizeof(arr)/sizeof(int)];
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        sum += arr[i];
        array[i] = sum;
        max_arr = max(sum,max_arr);
    }
    for(int i=sizeof(arr)/sizeof(int)-1;i>=0;i--){
        for(int j=0;j<=i;j++){
            int num = array[i] - array[j];
            max_arr = max(num,max_arr);
        }
    }
    cout<<max_arr;


    return 0;
}