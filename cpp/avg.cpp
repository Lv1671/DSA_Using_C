//avg of an array :

#include<iostream>
using namespace std;

int main(){
    int n , sum = 0;
    cout<<"Enter the value of n"<<endl;
    cin >> n;
    
    int a[n];
    cout<<"Enter the values in array"<<endl;
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    cout<<"calculating average :"<<endl;
    for(int i = 0; i < n; i++){
        sum +=a[i];
    }
    int avg = (sum / n);
    cout<<"Here's the avg of the given array "<<endl<<avg;
    return 0;
}