#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n here:\n";
    cin>>n;
    int i=1;
    char c='A';
    while(i<=n){
        // char c='A';
        int j=1;
        while(j<=n){
            cout<<c;
            c++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}