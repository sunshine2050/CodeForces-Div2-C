#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
typedef pair<int,int> ii;
bool cmp(ii i,ii j){
    if(i.first==j.first) return i.second<j.second;
    return i.first<j.first;
}
int main(){
    vector<ii> a;
    int n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        a.push_back(make_pair(x,y));
    }
    int c=min(a[0].first,a[0].second);
    for(int i=1;i<n;i++){
	c=(min(a[i].first,a[i].second)>=c?min(a[i].first,a[i].second):max(a[i].first,a[i].second);
    }
    cout<<c<<endl;
}
