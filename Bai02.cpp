#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n;
    cin>>n;
    float DiemTongKet[n];
    for(int i=0;i<n;i++){
        cin>>DiemTongKet[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(DiemTongKet[j]>DiemTongKet[i]){
                float tmp=DiemTongKet[i];
                DiemTongKet[i]=DiemTongKet[j];
                DiemTongKet[j]=tmp;
            }
        }
    }
    for(int k=0;k<n;k++){
        cout<<fixed<<setprecision(2)<<DiemTongKet[k]<<" ";
    }
    return 0;
}
