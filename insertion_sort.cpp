#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements in the array:- ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int current,j;
    for(int x=1;x<n;x++){
        current = arr[x];
        j = x-1;
        while(arr[j]>current && j>=0){
            arr[j+1] =arr[j];
            j--;
        }
        arr[j+1] = current;
    }
     
     for(int a=0;a<n;a++){
            cout<<" "<<arr[a];
        }
    return 0;
}