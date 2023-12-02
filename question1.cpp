#include<iostream>
using namespace std;
int main(){
    int a[]={1,0,5,4,6,8};
    int temp=a[0];
    for(int i=0;i<sizeof(a)/4;i++){
    if(a[i]>temp){
    temp = a[i];
    }
    cout<<temp<<endl;


    } 
    return 0;
}