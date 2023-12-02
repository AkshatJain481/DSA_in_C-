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
        for(int x =0;x<n-1;x++){
            for(int y=x+1;y<n;y++){
                if(arr[x]>arr[y]){
                    int temp = arr[x];
                    arr[x] = arr[y];
                    arr[y] = temp;
                }
            }
        }
    
        
        for(int a=0;a<n;a++){
            cout<<" , "<<arr[a];
        }
    return 0;
    }