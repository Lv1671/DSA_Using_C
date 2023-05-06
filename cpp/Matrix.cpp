//Adding of two Matrix

#include<iostream>
using namespace std;

int main(){
    int n , m;
    cout<<"Enter the value of n and m"<<endl;
    cin>> n >> m ;

 //Taking input for Array 1

    int a[n][m];
     cout<<"Enter the value for array 1"<<endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
          
            cin>>a[i][j];
        }
    }

    //Taking input for Array 2
    cout<<"Enter the values for Array 2 :"<<endl;
    int b [n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
           
            cin>>b[i][j];
        }
    }
    
    int c[n][m];

    //Now adding Two matrix :
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    //Displaying the result of addition of two matx :
    
    cout<<"Addition in the progress"<<endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<c[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    
    
    return 0;

}