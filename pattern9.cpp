#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n here:\n";
    cin>>n;
    int i,j;
    char c;
    i=1;
    while(i<=n){
        j=1;
        while(j<=n){
            c='A'+j-1;
            cout<<c;
            j=j+1;
        }
        cout<<endl;
        i++;
    }
    return 0;
}