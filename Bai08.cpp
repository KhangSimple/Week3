#include<iostream>
using namespace std;

int main(){
    string text;
    getline(cin,text);
    for(int i=0;i<text.length();i++){
    	if(text.substr(i,4)!="Zues") cout<<text[i];
    	else{
    		cout<<"Zeus";
    		i=i+3;
		}
	}
    return 0;
}
