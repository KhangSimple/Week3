#include<iostream>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    s=" "+s;
    int num_word=0;
    for(int i=1;i<s.length();i++){
        if(s[i]!=' '&&s[i-1]==' ') num_word++;
    }
    cout<<num_word;
    return 0;
}
