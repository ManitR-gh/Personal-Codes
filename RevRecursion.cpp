#include<bits/stdc++.h>
using namespace std;
 // to print name n times via recursuions
void f(int i, int n){
	while(i>n)
		return;
	cout<<n<<endl;
	f(i,n-1);
}
	
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt","w", stdout);
#endif

	int n;
	cin>>n;
	f(1,n);
} 
