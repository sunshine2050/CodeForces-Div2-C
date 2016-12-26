#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	vector <string> a;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		a.push_back(s);
	}
	set <char> s;
	long long tot=1;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++) s.insert(a[j][i]);
		tot*=(int) s.size();
		tot%=1000000007;
		s.clear();
	}
	cout<<tot<<endl;
	return 0;
}
