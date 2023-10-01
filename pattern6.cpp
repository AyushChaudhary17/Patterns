#include<iostream>
using namespace std;
int main(){
    int n=4;
    int count=0;
    for(int i=1;i<=n;i++){
        count=i;
        for(int j=1;j<=i;j++){
            cout<<count;
            count--;
        }
        cout<<endl;
    }
    return 0;
}