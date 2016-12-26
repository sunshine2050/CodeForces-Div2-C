#include <iostream>

using namespace std;

int main(){
	string s="";
	int c=1,k=0;
	string ss;
	cin>>ss;
	if(ss.length()<=2){
		cout<<ss<<endl;
		return 0;
	}
	s+=ss[0];
	for(int i=1;i<ss.length();i++){
		if(ss[i]==ss[i-1]) c++;
		else c=1;
		if(c>2) continue;
		s+=ss[i];
	}
	//cout<<s<<endl;
	ss="";
	bool p=0;
	if(s.length()<=3){
		cout<<s<<endl;
		return 0;
	}
	ss+=s[0];
	ss+=s[1];
	ss+=s[2];
	for(int i=3;i<s.length();i++){
		if(s[i]==s[i-1] && s[i-2]==s[i-3]){s[i]='-1'; continue;}
		ss+=s[i];
	}
	cout<<ss<<endl;
}
