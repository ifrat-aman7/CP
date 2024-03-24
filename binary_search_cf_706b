#include<bits/stdc++.h>

using namespace std;

int main()
{
	// vector<int> v ={1,5,7};
	
	// cout<< upper_bound(v.begin(),v.end(),3)-v.begin();

	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int tmp;
		cin>>tmp;
		v.push_back(tmp);
	}
	int q;
	cin>>q;
	sort(v.begin(),v.end());
	int tmp;
	int index;
	while(q--){
		cin>>tmp;
		 index = upper_bound(v.begin(),v.end(),tmp)-v.begin();
		cout<<index<<endl;

	}
	return 0;
}
