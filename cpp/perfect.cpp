//Program for Perfect Number
#include<iostream>
using namespace std;
int Sum_of_factors(int n){
    int sum = 0;
    for(int i = 1; i <=n ; i++){
        if(n % i == 0){
            sum += i;
        }
    }
    return sum;
}
void check(int sum, int n){
     if(sum == 2 * n)
    cout <<"perfect number";
    else
    cout<<"not perfect";
}
int main(){
    int n ;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    
    int sum = Sum_of_factors(n);
    check(sum , n);
   return 0;
    
}