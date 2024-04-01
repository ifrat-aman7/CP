#include<bits/stdc++.h>

using namespace std;

int main(){
	vector<int> v ={1,-1,3};
	cout<<all_of(v.begin(),v.end(),
		[](int x){return x>0;});
}	//all_of returns 1 0
