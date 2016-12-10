#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int n,m,k;
	cin>>n>>m>>k;
	map <int,int> ma;
	vector <int> a(n+1);
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		a[i]=x;
		ma[x]=i;
	}
	long long ans=0;
	for(int i=0;i<m;i++){
		int x;
		cin>>x;
		ans+=ma[x]/k+1;
		if(!ma[x]) continue;
		int id2=a[ma[x]-1];
		swap(a[ma[x]],a[ma[x]-1]);
		swap(ma[x],ma[id2]);
	}
	cout<<ans<<endl;
	return 0;
}
