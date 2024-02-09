#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[] = {1,2,4,9,5,7,3,6,3,2};
    vector <int> v(sizeof(arr)/sizeof(int),-1);
    int x = INT_MAX;
    int y;
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        if(v[arr[i]] == -1){
            v[arr[i]] = i;
        }
        else if(x>v[arr[i]]){
            x = v[arr[i]];
            y = arr[i];
        }
        
    }
    cout<<"On index:-"<<x<<" element:-"<<y<<" is repeated with the least index.";

    return 0;    
}