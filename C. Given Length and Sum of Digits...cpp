#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	long long m,s;
	cin>>m>>s;
	if((s==0 && m!=1) || s>9*m){
		cout<<"-1 -1"<<endl;
		return 0;
	}
	if(s==0 && m==1){
		cout<<"0 0"<<endl;
		return 0;
	}
	string s1="";
	string s2="";
	for(int i=0;i<m;i++){
		s1+='0';
		s2+='0';
	}
	for(int i=0;i<m;i++){
		if(s>9){
			s-=9;
			s1[m-i-1]='9';
			s2[i]='9';
		}
		else{
			s1[m-i-1]=char(s-1+'0');
			s2[i]=char(s+'0');
			break;
		}
	}
	s1[0]=char(s1[0]+1);
	cout<<s1<<" "<<s2<<endl;
	return 0;
}
