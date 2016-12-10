#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
map<string,int>ma;
set<string> s;
int main() {
	int n,m;
	vector<int> a;
	vector <int> b;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		a.push_back(x);
	}
	for(int i=0;i<m;i++){
		string temp;
		cin>>temp;
		s.insert(temp);
		ma[temp]++;
	}
	int totmin=0;
	int totmax=0;
	sort(a.begin(),a.end());
	int i=0,j=n-1;
	while((int) s.size()){
		b.push_back(ma[*s.begin()]);
		s.erase(s.begin());
	}
	sort(b.begin(),b.end());
	int k=(int)b.size();
	while(k--){
		totmin+=b[k]*a[i];
		totmax+=b[k]*a[j];
		i++; j--;
	}
	cout<<totmin<<" "<<totmax<<endl;
	return 0;
}
