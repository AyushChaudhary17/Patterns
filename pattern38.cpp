#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n here:\n";
    cin>>n;
    int i=1;
    char alpha='A';
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<alpha<<" ";
            alpha=alpha+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}