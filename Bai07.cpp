#include<iostream>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int countAlpha=0;
    int countNum=0;
    int countOther;
    for(int i=0;i<s.length()-1;i++){
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')) countAlpha++;
        if(s[i]>='0'&&s[i]<='9') countNum++;
    }
    countOther=s.length()-countAlpha-countNum;
    cout<<countAlpha<<" "<<countNum<<" "<<countOther;
    return 0;
}
