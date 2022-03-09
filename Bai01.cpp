#include<iostream>
using namespace std;
bool checkMangBangNhau(int a[],int b[],int n);
int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<n;j++){
        cin>>b[j];
    }
    if(checkMangBangNhau(a,b,n)==true) cout<<"YES";
    else cout<<"NO";
    return 0;
}
bool checkMangBangNhau(int a[],int b[],int n){
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]) return false;
    }
    return true;
}
