#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n here:\n";
    cin>>n;
    int i=1;
    while(i<=n){
        int l=1;
        while(l<=n-i){
            cout<<" ";
            l=l+1;
        }
        int j=1;
        while(j<=i-1){
            cout<<j;
            j=j+1;
        }
        int k=1;
        while(k<=i){
            cout<<i-k+1;
            k=k+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}