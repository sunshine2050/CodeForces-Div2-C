#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int x=n;
	int move=n-1;
	cout<<x<<" ";
	for(int i=0;i<n-1;i++){
		if(i%2==0){x-=move; cout<<x<<" ";}
		else{x+=move; cout<<x<<" ";}
		move--;
	}
	return 0;
}
