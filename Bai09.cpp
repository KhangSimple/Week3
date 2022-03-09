#include<iostream>
using namespace std;

int main(){
    string text;
	getline(cin,text);
	int pos;
	for(int i=0;i<text.length();i++){
		if(text[i]!=' '){
			pos=i;
			break;
		}
	}
	for(int j=0;j<pos;j++){
		cout<<text[j];
	}
	for(int k=pos;k<text.length();k++){
		if(text[k]!=' '||(text[k]==' '&& text[k+1]!=' ')) cout<<text[k];
	}
	return 0;
}
