#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int m[3];
int main() {
	int n;
	cin>>n;
	vector <int> a;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		m[x%3]++;
	}
	cout<<m[0]/2+min(m[1],m[2])<<endl;
	return 0;
}
