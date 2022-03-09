#include<iostream>

using namespace std;
bool checkLen(string username);
bool checkLetter(string username);
bool checkFirstLetter(string username);

int main(){
    string username;
    getline(cin,username);
    if(checkLen(username)==true &&checkLetter(username)==true &&checkFirstLetter(username)==true){
    	cout<<"Valid username.";
	}
	else cout<<"Invalid username.";
	return 0;
}


bool checkLen(string username){
	if(username.length()>=6 &&username.length()<=15) return true;
	else return false;
}
bool checkLetter(string username){
	int count=0;
	for(int i=0;i<username.length();i++){
		char t=username[i];
		if((t>='a'&&t<='z')||(t>='A'&&t<='Z')||(t>='0'&&t<='9')) count++;
	}
	if(count==username.length()) return true;
	else return false;
}
bool checkFirstLetter(string username){
	if(username[0]>='0'&& username[0]<='9') return false;
	else return true;
}
