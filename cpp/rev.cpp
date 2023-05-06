#include<iostream>
using namespace std;

int main(){
    int n , r = 0;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    
    while( n != 0){
        r = n % 10;
        cout <<r;
        n /= 10;
    }
    return 0;
}


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
            break;
        }
    }
    if(count == 0)
    cout<<"Prime";
    else
    cout<<"Not Prime";
}

#include<iostream>
using namespace std;

int main(){
    int n , r = 0;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    
    while( n != 0){
        r = n % 10;
        cout <<r;
        n /= 10;
    }
    return 0;
}



//program for Armstrong Number
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n , m, r = 0, sum = 0;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    n = m;
    while(m != 0){
        r = m % 10;
       sum += pow(r,3);
       m /=10;
    }
    if(sum == n)
    cout<<"Armstrong Number";
    else
    cout<<"Not a Armstrong Number";
}

#include<iostream>
using namespace std;

int main(){
    int n , r = 0, rev = 0;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    while( n != 0){
        r = n % 10;
        rev = rev * 10 + r;
        n /= 10;
    }
    cout<<rev;
    return 0;
}


#include <iostream>
using namespace std;

int main()
{
    int r, n, m, rev = 0;
    cout << "Enter a number:";
    cin >> n;
    m = n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
    }
    if (rev == m)
    {
        cout << "Palindrome number";
    }
    else
    {
        cout << "Not a Palindrome number";
    }
}


//palindrome number
#include<iostream>
using namespace std;

int main(){
    int n , m,r = 0, rev = 0;
    m = n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    while( n != 0){
        r = n % 10;
         n /= 10;
        rev = rev * 10 + r;
       
    }
    if( m == rev)
    cout<<"Palindrome";
    else
    cout<<"Not Palindrome";
    return 0;
}
//Program for gcd
#include<iostream>
using namespace std;
int main(){
    while(m !=n){
        if(m > n)
        m = m-n;
        else
        n = n-m;
    }
    cout <<m;
}
