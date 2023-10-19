#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n here:\n";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char alpha='A'+j-1;
            cout<<alpha<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}