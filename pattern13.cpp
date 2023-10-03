#include<iostream>
using namespace std;
int main(){
    int n=4;
    int i=1;
    char c;
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