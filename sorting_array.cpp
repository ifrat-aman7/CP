#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);//a is address of the 1st element, a+n is the address of next element of last element
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	//intro sort algorithm is used in sort function
}
