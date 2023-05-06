//program for prime number
#include<iostream>
using namespace std;

int main(){
    int n , count = 0;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 0)
    cout<<"Prime";
    else
    cout<<"Not Prime";
}