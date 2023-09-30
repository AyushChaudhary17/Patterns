#include<iostream>
using namespace std;
int main(){
    int n=3;
    int term=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<term;
            term++;
        }
        cout<<endl;
    }
    return 0;
}