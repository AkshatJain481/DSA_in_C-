#include<iostream>
using namespace std;
int main(){
    int *a;
    int *b;
    int arr[] = {13,13,23,45,67,11,11,10,9,7,6,4,2,6}; // find sub array whose sum is 12
    a = &arr[0];
    b = &arr[0];
    int s = 12;
    int sum = 0;
    sum += *a;
    while(true){
    if(s>sum){
        if(b+1 == &arr[sizeof(arr)/sizeof(int)]){
        cout<<"No solution found!!";
        break;
        }
        b++;
        sum += *b;
    }
    else if (s<sum)
    {
        sum -= *a;
        a++;
    }
    else{
        cout<<*a<<" and "<<*b;
        break;
    }
    
    }

    return 0;
}