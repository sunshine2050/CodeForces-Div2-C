#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
typedef pair<int,int> ii;
bool cmp(ii i,ii j){
    if(i.second==j.second) return i.first<j.first;
    return i.second<j.second;
}
int main(){
    long long n,r,minavg;
    cin>>n>>r>>minavg;
    vector <ii> a;
    int grade=0;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        grade+=x;
        a.push_back(make_pair(x,y));
    }
    sort(a.begin(),a.end(),cmp);
    long long nEssays=0;
    long long nPoints=(grade<minavg*r?minavg*r-grade:0);
    for(int i=0;i<n;i++){
        if(!nPoints) break;
        nEssays+=min(nPoints,(r-a[i].first))*a[i].second;
        nPoints-=min(nPoints,(r-a[i].first));
    }
    cout<<nEssays<<endl;
}
