//Program for Sum of N numbers :

#include<iostream>
using namespace std;

int main(){
    int n , sum = 0;
    cout<<"Enter the value of N"<<endl;
    cin>>n;
    
    for(int i = 0; i <= n; i++){
        sum+=i;
    }
    cout<<sum;
    return 0;
}