#include <iostream>
#include <vector>
#include <queue>
#include <utility>
using namespace std;
typedef pair<int,int> iv;
typedef vector<int> ii;
vector <ii> a(2001);
queue <iv> q;
int c;
int bfs(){
	iv k;
	q.push(make_pair(0,0));
	while(!q.empty()){
		iv i=q.front();
		q.pop();
		for(int j=0;j<a[i.first].size();j++){
			q.push(make_pair(a[i.first][j],i.second+1));
		//	cout<<i.first<<":"<<a[i.first][j]<<":"<<i.second<<endl;
		}
		c=i.second;
	}
	return c;
}
int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int x=0;
		cin>>x;
		if(x<0) x=0;
		a[x].push_back(i);
	}
	cout<<bfs()<<endl;
	return 0;
}
