/*
*
* *
* * *
* * * *

*/

// Pattern 1
#include<iostream>
using namespace std;

//Function
void pattern1(int n){
    int nst = 1;
    for(int row = 1; row <= n; row++){
        for(int cst = 1; cst <= nst; cst++)
        cout<<"*\t";
        nst++;
        cout<<endl;
    }
}
int main(){
    int n ;
    cout<<"Enter the value of N"<<endl;
    cin>>n;
    pattern1(n);
}


/*
* * * * *
* * * *
* * *
* *
*
Inverted triangle
*/
#include<iostream>
using namespace std;
void Pattern2(int n ){
    int nst = n;
    for(int row = 1; row <= n; row++){
        for(int cst = 1; cst <= nst; cst++){
            cout<<"*\t";
        }
        nst--;
        cout<<endl;
    }
}
int main(){
    int n ;
    cout<<"Enter the value of N"<<endl;
    cin>>n;
    
    Pattern2(n);
}



/*
1 2 3 4
5 6 7 8
9 10 11 12

*/

//Pattern 3

#include<iostream>
using namespace std;

void Pattern3(int n){
    int nst = n;
    int count = 1;
    for(int row = 1; row <= n; row++){
        for(int cst = 1; cst <= nst; cst++){
        cout<<count<<"\t";
        count++;
        }
        cout<<endl;
    }
}
int main(){
    int n ;
    cout<<"Enter the value of N"<<endl;
    cin>> n;
    
    Pattern3(n);
}



//Pattern 4
/*

* * * *
  * * *
    * *
      *
*/

#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the value of n "<<endl;
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        for(int j  = 1; j <= n ; j++){
            if(j >= i){
                cout<<"*\t";
            }else
            cout<<"\t";
        }
        cout<<endl;
    }
}



/*
_ _ _ *
_ _ * *
_ * * *
* * * *

*/

#include<iostream>
using namespace std;

void Pattern4(int n ){
    int nst = 1, nsp = (n - 1);
    
    for(int row = 1; row <= n; row ++){
        for(int csp = 1; csp <= nsp; csp++){
            cout<<"\t";
        }
        for(int cst = 1; cst <= nst; cst++){
            cout<<"*\t";
        }
       cout<<endl;
        nsp--;
        nst++;
        
    }
}
int main(){
    int n ;
    cout<<"Enter the value of N "<<endl;
    cin>> n;
    
    Pattern4(n);
    return 0;
}



#include<iostream>
using namespace std;

void Pattern5(int n ){
int nst = 1, nsp = n / 2;

for(int row =  1; row <= n; row++){
    for(int csp = 1; csp <= nsp; csp++){
        cout<<"\t";
    }
    for(int cst = 1; cst <= nst; cst++){
        cout<<"*\t";
    }
    
    if(row <= n /2){
        nsp--;
        nst+=2;
    }else{
        nsp++;
        nst-=2;
    }
    cout<<endl;
}
}
int main(){
    int n ;
    cout<<"Enter the value of n "<<endl;
    cin >> n;
    
    Pattern5(n);
    return 0;
}



#include<iostream>
using namespace std;

void pattern6(int n ){
    int nst = (n/2) + 1;
    int nsp = 1;
    
    for(int row = 1; row <= n; row ++){
        
        for(int cst = 1; cst <= nst; cst++){
            cout<<"*\t";
        }
        for(int csp = 1; csp <= nsp; csp++){
            cout<<"#\t";
        }
        for(int cst = 1; cst <= nst; cst++){
            cout<<"*\t";
        }
        cout<<endl;
        if(row <= (n/2)){
        nsp+=2;
        nst--;
        }
        else{
            nsp-=2;
            nst++;
        }
    }
}
int main(){
    int n ;
    cout<<"Enter the value of N"<<endl;
    cin>> n;
    
    pattern6(n);
    return 0;
}