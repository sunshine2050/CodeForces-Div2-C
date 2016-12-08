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
	int mod3=0;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		int sum=0;
		while(x){
			sum+=x%10;
			x/=10;
		}
		
		if(sum%3==0) mod3++;
		else{
			m[sum]++;
			a.push_back(sum);
		}
	}
	int c=0;
	sort(a.begin(),a.end());
	for(int i=0;i<(int) a.size();i++){
		if(m[a[i]]<1) continue;
		for(int j=a[i]+1;j<=100;j++){
			if(!m[a[i]]) break;
			if((a[i]+j)%3==0 && m[j]){
			//	cout<<a[i]<<":"<<j<<":"<<m[a[i]]<<":"<<m[j]<<endl;
				m[a[i]]--;
				m[j]--;
				c++;
			}
		}
	}
	cout<<c+mod3/2<<endl;
	return 0;
}
