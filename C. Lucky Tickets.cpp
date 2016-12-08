#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
map <int,int> m;
int main() {
	int n;
	cin>>n;
	vector <int> a;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		int sum=0;
		while(x){
			sum+=x%10;
			x/=10;
		}
		m[sum]++;
		a.push_back(sum);
	}
	int c=0;
	for(int i=0;i<n;i++){
		if(m[a[i]]<1) continue;
		for(int j=1;j<=63;j++){
			if(!m[a[i]]) break;
			if((a[i]+j)%3==0 && m[j]){
				//cout<<a[i]<<":"<<j<<":"<<m[a[i]]<<":"<<m[j]<<endl;
				if(a[i]==j && m[j]<2) continue;
				m[a[i]]--;
				m[j]--;
				c++;
			}
		}
	}
	cout<<c<<endl;
	return 0;
}
