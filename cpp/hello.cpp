//Binary Search 
#include<iostream>
using namespace std;

int main(){
    int A[5] = {10,20,30, 40, 50};
    int low  = 0, high = 4, key = 40, mid = 0;
    
    mid = (low + high)/2;
    
    while( low <= high){
        if(key == A[mid]){
        cout<<"Data is found in the given array"<<mid<<endl;
        return 0;
        }
        else if(key < A[mid])
        high = mid - 1;
        else
         low = mid + 1;
    }
    //cout<<"Bhai nhi milra :/"<<endl;
    
    return -1;
}


//Count number of negative and positive in array
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of N"<<endl;
    cin>>n;
    
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int count_pos = 0;
    int count_neg = 0;
    
    for(int i = 0; i < n; i++){
        if(arr[i] >= 0)
        count_pos++;
        else
        count_neg++;
    }
    cout<<"positive count "<<count_pos<<endl;
    cout<<"negative count "<<count_neg<<endl;
}



//Minimum value of array
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    
   int arr[n];
    for(int i = 0; i < n; i++){
    cin>>arr[i];
        
    }
    int min = (arr[0]);
    for(int i = 0; i < n; i++){
     if(min >= arr[i])
     min = arr[i];
    }
    cout<<min;
    return 0;
}


#include<iostream>
using namespace std;

int main(){
    int n ;
    cout <<"Enter the value of n"<<endl;
    cin>>n;
    
    int arr[n];
    for(int i = 0; i < n; i++)
    cin>> arr[i];
    
    //Enter the value of key
    int key, low = (arr[0]), high = (arr[n - 1]), mid = 0;
    cout<<"Enter the value of key"<<endl;
    cin>>key;
    
    //Processing
    while(low <= high){
        mid = (low + high)/ 2;
        
        if(key == arr[mid]){
            cout<<"Data is found at"<<"\t"<<mid;
            return 0;
        }else if(key >= arr[mid])
        low = mid + 1;
        else
        high = mid - 1;
    }
    cout<<"Not found";
    return -1;
}


//Binary Search 
#include<iostream>
using namespace std;

int main(){
    int A[5] = {10,20,30, 40, 50};
    int low  = 0, high = 4, key = 40, mid = 0;
    
    
    
    while( low <= high){
        mid = (low + high)/2;
        
        if(key == A[mid]){
        cout<<"Data is found in the given array"<<endl<<mid;
        return 0;
        }
        else if(key > A[mid])
         low = mid + 1;
     
        else
          high = mid - 1;
    }
    cout<<"Bhai nhi milra :/"<<endl;
    
    return -1;
}