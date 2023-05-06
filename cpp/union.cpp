#include<iostream>
using namespace std;

union money{
    int rice;//4
    char car;//1
    float pound;//4
};
//In union it declares the max value of data type.
//Here 4 is the maximum value so it creates 4 bytes of memory for three of the datatypes.
//Unlike structures creating different memory bytes for all it creates only one shared maximum memory for all.

int main(){
    union money m1;
    m1.rice = 34;
    m1.car = 'L';//Now because of m1.car it returns garbage value.
    //cout<<m1.rice<<endl;
    cout<<m1.car;
}