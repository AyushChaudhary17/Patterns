#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n here:\n";
    cin>>n;
    int i=1;
    char c='A';
    while(i<=n){
        int j=1;
        c='A'+i-1;
        while(j<=i){
            cout<<c;
            c++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}