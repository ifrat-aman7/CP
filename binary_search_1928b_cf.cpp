#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int ar[n];
		for(int i=0;i<n;i++){
			cin>>ar[i];
		}
		set<int> s;
		for(int i=0;i<n;i++){
			s.insert(ar[i]);
		}
		vector<int> v;
		for(auto x: s){
			v.push_back(x);			
		}
		int ans =0;
		for(int i=0;i<v.size();i++){
			auto iit=lower_bound(v.begin(),v.end(),v[i]+n);
			int frq=iit-v.begin()-i;
			ans=max(ans,frq);
		}

		cout<<ans<<endl;

		
	}
}
