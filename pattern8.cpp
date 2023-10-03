#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n here:\n";
    cin>>n;
    char c;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            c='A'+j-1;
            cout<<c;
        }
        cout<<endl;
    }
}