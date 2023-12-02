#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in the array:- ";
    cin>>n;
    int arr[n],temp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int x=n-1;x>=0;x--){
        for(int y=0;y<x;y++){
            if(arr[y]>arr[y+1]){
                temp=arr[y];
                arr[y] = arr[y+1];
                arr[y+1] = temp;
            }
        }
    }
    for(int a=0;a<n;a++){
            cout<<" "<<arr[a];
        }


    
    return 0;
}

