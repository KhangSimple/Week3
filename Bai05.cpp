#include<iostream>
using namespace std;
bool checkMangDoiXung(int a[],int n);
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(checkMangDoiXung(a,n)==true) cout<<"Symmetric array.";
    else cout<<"Asymmetric array.";
    return 0;
}
bool checkMangDoiXung(int a[],int n){
    for(int i=0;i<n/2;i++){
        if(a[i]!=a[n-1-i]) return false;
    }
    return true;
}
