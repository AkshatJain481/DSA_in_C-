#include<iostream>
#include<vector>
using namespace std;
int main (){
    int arr[] = {-2,5,0,8,3,1,4,-5,1000};
    vector <bool> v(sizeof(arr)/sizeof(int), false);
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        if(arr[i]>-1){
            v[arr[i]] = true;
        }
    }
    for(int j = 0;j<sizeof(v)/sizeof(bool);j++){
        if(v[j] == false){
            cout<<"Missing smallest positive number is: - "<<j;
            break;

        }
    }
    return 0;
}