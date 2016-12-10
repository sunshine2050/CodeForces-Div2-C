#include <iostream>
#include <set>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
int STI(string s){
	stringstream ss;
	ss<<s;
	int k;
	ss>>k;
	return k;
}
int main(){
	string s,ss="";
	cin>>s;
	set <int> a;
	vector <int> b;
	int c=0;
	for(int i=0;i<(int)s.length();i++){
		if(s[i]==','){c++; ss+=' ';}
		else ss+=s[i];
	}
	stringstream s1;
	s1<<ss;
	for(int i=0;i<c+1;i++){
		string temp;
		s1>>temp;
		a.insert(STI(temp));
	}
	while((int)a.size()){
	//	cout<<*a.begin()<<endl;
		b.push_back(*a.begin());
		a.erase(a.begin());
	}
	s="";
	int st=b[0];
	cout<<st;
	bool dash=false;
	for(int i=1;i<(int) b.size();i++){
		if( b[i]==b[i-1]+1){
			dash=true; 
			continue;
		}
		else {
			if(dash){
				cout<<"-"<<b[i-1]<<","<<b[i];
				st=b[i];
				dash=false;
			}
			else cout<<","<<b[i];
		}	
	}
	if(dash) cout<<'-'<<b[(int) b.size()-1];
}
