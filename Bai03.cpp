#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int tmp=a[i];
                a[i]=a[j];
                a[i]=tmp;
            }
        }
    }
    for(int k=0;k<n;k++){
        if(a[k]!=a[k+1]) cout<<a[k]<<" ";
    }
    return 0;
}
