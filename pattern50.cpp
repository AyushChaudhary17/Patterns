#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n here:\n";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j=j+1;
        }
        int k=1;
        while(k<=i-1){
            cout<<"*";
            k=k+1;
        }
        int l=1;
        while(l<=i-1){
            cout<<"*";
            l=l+1;
        }
        int m=n-i+1;
        while(m>=1){
            cout<<m;
            m=m-1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}