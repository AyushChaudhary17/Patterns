#include<iostream>
using namespace std;
int main(){
    int n=4;
    char c;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            c='A'+i-1;
            cout<<c;
        }
        // c=c+1;
        cout<<endl;
    }
    return 0;
}