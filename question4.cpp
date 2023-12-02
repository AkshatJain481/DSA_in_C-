#include<iostream>// record breaking days   
using namespace std;
int main(){
    int days[]= {1,2,0,7,2,0,2,2};
    int ans = 0;
    int temp_day = 0;
    for(int i=0;i<sizeof(days)/4;i++){
        if(days[i]>temp_day){
            temp_day=days[i];
            if(i+1<sizeof(days)/4){
                if(days[i+1]<days[i]){
                    ans++;
                }
            }
            else{
                ans++;
            }
        }
    }
    cout<<ans;


    return 0;
}