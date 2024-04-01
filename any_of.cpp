#include<bits/stdc++.h>

using namespace std;

int main(){
	vector<int> v ={2,-4,-5};
	cout<<all_of(v.begin(),v.end(),
		[](int x){return x>0;})<<endl;
	cout<<any_of(v.begin(),v.end(),
		[](int x){return x>0;})<<endl;
}	//all_of returns 1 0
