#include<iostream>

using namespace std;

struct employee{
    int e_id;
    char favChar;
    float salary;
};
int main(){
    struct employee lakshay;
    lakshay.e_id = 1;
    lakshay.favChar = 'l';
    lakshay.salary = 100000;

    cout<<lakshay.e_id<<endl;
    cout<<lakshay.favChar<<endl;
    cout<<lakshay.salary<<endl;
}