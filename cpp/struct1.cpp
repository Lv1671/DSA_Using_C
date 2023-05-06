#include<iostream>
using namespace std;

typedef struct employee{
    int e_id;
    char favChar;
    float salary;
}ep;

int main(){
    ep lakshay;
    lakshay.e_id = 1;
    lakshay.favChar = 'v';
    lakshay.salary = 10000;
    cout<<lakshay.e_id<<endl;
    cout<<lakshay.favChar<<endl;
    cout<<lakshay.salary<<endl;
    return 0;
}