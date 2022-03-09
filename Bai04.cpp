#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n;
    cin>>n;
    float a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    float x;
    cin>>x;
    int pos;
    for(int j=0;j<n;j++){
        if(x<a[j]){
            pos=j;
            break;
        }
    }
    for(int k=n;k>pos;k--){
        a[k]=a[k-1];
    }
    a[pos]=x;
    for(int l=0;l<n+1;l++){
        cout<<fixed<<setprecision(2)<<a[l]<<" ";
    }
    return 0;
}
