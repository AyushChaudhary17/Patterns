#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n here:\n";
    cin>>n;
    int i=1;
    
    while(i<=n){
        int j=1;
        // int count=i;
        while(j<=i){
            cout<<i+j-1;
            j=j+1;
            // count=count+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}