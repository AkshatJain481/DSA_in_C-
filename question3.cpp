#include<iostream> // length of the maximum arthematic subarray
using namespace std;
int main(){
    int arr[] = {2,4,6,8,10,12,1,2,3,4,5,6,7,3,6,9,12,15,18,21,24,27,30,33,36,39,42,45};
    int i = 0;
    int j = 1;
    int temp; 
    int final_ans=0;
    
    while(j<sizeof(arr)/4){
        int d = arr[i]-arr[j];
        int ans= 1; 
        do{
            i++;
            j++;
            temp = arr[i]-arr[j]; 
            ans++;
            }
            while(j<sizeof(arr)/4 && temp==d);
            if(final_ans<ans){
                final_ans=ans;
            }

            
    }
    cout<<final_ans;
    return 0;
}