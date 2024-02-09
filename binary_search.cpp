#include<iostream>
using namespace std;
int main(){
    int arr[14] = {1,2,4,5,7,8,9,10,13,15,18,22,25,40}; // can take it as input 
    int target = 41; // can take it as input
    int low = 0;
    int high = 13;
    int mid;
    while (low<=high)
    {
     mid = (low+high)/2;
     if(arr[mid]==target){
        printf("Element on index:- %d",mid);
        break;
     }
     else if(arr[mid]>target){
        high = mid-1;
     }
     else{
        low = mid+1;
     }

    }
    if(arr[mid]!=target){
        printf("Element not found!!");
     }
    


    return 0;
}