#include<bits/stdc++.h>
using namespace std;
int main(){
    //  for(int i =0 ;i<6;i++){
    //     if(i ==0 || i==5){
    //         for(int i=0;i<5;i++){
    //             cout<<"* ";
    //         }
    //     }
    //     else{
    //         cout<<"*";
    //         for(int i=0;i<6;i++){
    //             cout<<" ";
    //         }
    //         cout<<"*";
    //     }
    //      cout<<endl;
    //  }
    int n;
    cin>>n;
    // for(int i =0 ;i<n;i++){
    //     for(int j = 0 ; j < n-i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    for(int i=0;i<n;i++){
        for(int j=0 ;j<n;j++){
            if(i==n-i-1){
                cout<<" ";
            }
            
               
            
            }
             cout<<"*";
            cout<<endl;
    }
    return 0; 
}