// 1 2 3
// 1 2 3
// 1 2 3

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 1;

    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<< j;  // cout << n-j+1 for reverse print i.e 3 2 1
            j = j+1;
        }
        cout<<endl;
        i++;
    }
}