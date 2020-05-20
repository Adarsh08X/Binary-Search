#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int time=(240-k)/5,ans=0;
    int a[n];
    for(int i=0;i<n;i++)
    {
       a[i]=i+1;
    }
    int l=0,r=n-1;
    while(l<=r)
    {
      int mid=l+(r-l)/2;
      if(time>=a[mid]*(a[mid]+1)/2){
        ans=a[mid];
        l=mid+1;
      }
      else{
        r=mid-1;
      }
    }
    cout<<ans;
  }
