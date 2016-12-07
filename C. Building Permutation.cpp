#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){long long x; cin>>x; a.push_back(x);}
    sort(a.begin(),a.end());
    long long moves=0;
    for(int i=0;i<n;i++){
        moves+=abs((i+1)-a[i]);
    }
    cout<<moves<<endl;
}
