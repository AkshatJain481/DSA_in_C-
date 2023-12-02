#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,2};
    int sum = 0;
    for(int i=0;i<sizeof(arr)/4;i++){
        sum = 0;
        for(int j=i;j<sizeof(arr)/4;j++){
        sum +=arr[j];
        cout<<sum<<endl;
        }
    }
    return 0;
}