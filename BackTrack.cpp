#include<bits/stdc++.h>
using namespace std;
 // to print 1 to N w/o using f(i+1,n)
void f(int i, int n){
	while(i<1)
		return;
	//f(n-1,i);
	cout<<i<<endl;// print before f call u get N to 1
	f(i-1,n);
	cout<<i<<endl;// print after f call u get 1 to N
}
	
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt","w", stdout);
#endif

	int n; // let 5
	cin>>n;
	f(n,n);
} 
