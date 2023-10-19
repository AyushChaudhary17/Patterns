#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n here:\n";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        // alpha=alpha+i;
        
        while(j<=n){
            char alpha='A'+i-1;
            cout<<alpha<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}