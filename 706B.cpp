//UpperBound 
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define OJ \
        freopen("input.txt","r",stdin); \
        freopen("output.txt","w",stdout);

int main()
{ 
   
   OJ;
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
int n;
cin>>n;

vector<int> a;
for(int i=0;i<n;i++)
{int x;
 cin>>x;
 a.push_back(x);
}
sort(a.begin(),a.end());
int q;
cin>>q;
while(q--)
{
        int m;
        cin>>m;
vector<int>::iterator it=upper_bound(a.begin(),a.end(),m);
cout<<it-a.begin()<<endl;

}

}
