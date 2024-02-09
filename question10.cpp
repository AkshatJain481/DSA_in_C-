#include<iostream>
using namespace std;

int kadane(int arr[],int n){
    int sum=0;
    int max_sum = 0;
    for(int i=0; i<n;i++){
        sum += arr[i];
        if(sum<0){
            sum = 0;
        }
        max_sum = max(sum, max_sum);
    }
    return max_sum;
}


int main(){
    int arr[] = {4,-4,6,-6,10,-11,12};
    int arr_sum = 0;
    int nonwrapsum = kadane(arr,sizeof(arr)/sizeof(int));
    
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
    {
        arr_sum += arr[i];
        arr[i] = -arr[i];
    }
    
    int wrapsum = arr_sum + kadane(arr,sizeof(arr)/sizeof(int));

    cout<<max(wrapsum,nonwrapsum); 
    return 0;
}