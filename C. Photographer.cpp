#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
int n,d,a1,b1;
class Request{
public:
    int x;
    int y;
    int idx;
};
bool cmp(Request i,Request j){
	int d1=a1*i.x+b1*i.y;
	int d2=a1*j.x+b1*j.y;
    return d1<d2;
}
int main(){
    vector <Request> a;
    vector <int> b;
    cin>>n>>d;
    cin>>a1>>b1;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        Request k;
        k.x=x; k.y=y; k.idx=i+1;
        a.push_back(k);
    }
    sort(a.begin(),a.end(),cmp);
    for(int i=0;i<n;i++){
    //	cout<<a[i].x<<" "<<a[i].y<<endl;
        if(d<a1*a[i].x+b1*a[i].y) continue;
        d-=a1*a[i].x+b1*a[i].y;
        b.push_back(a[i].idx);
    }
    cout<<(int) b.size()<<endl;
    for(int i=0;i<(int)b.size();i++) cout<<b[i]<<" ";
}
