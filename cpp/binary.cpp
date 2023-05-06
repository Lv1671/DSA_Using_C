#include<iostream>
using namespace std;

int main(){
    int n ;
    cout <<"Enter the value of n"<<endl;
    cin>>n;
    
    int arr[n];
    for(int i = 0; i < n; i++)
    cin>> n;
    
    //Enter the value of key
    int key, low = 0, high = n - 1, mid = 0;
    cout<<"Enter the value of key"<<endl;
    cin>>key;
    
    //Processing
    while(low <= high){
        mid = (low + high)/ 2;
        
        if(key == arr[mid]){
            cout<<"Data is found at"<<"\t"<<mid;
            return 0;
        }else if(key >= arr[mid])
        low = mid + 1;
        else
        high = mid - 1;
    }
    cout<<"Not found";
    return -1;
}