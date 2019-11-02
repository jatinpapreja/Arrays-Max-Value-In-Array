#include<iostream>
using namespace std;
int maxx(int a[],int n)
{
  int i;
  for(i=1;i<n;i++)
  {if(a[0]<a[i])a[0]=a[i];
  }
  return a[0];
}
int main() {
  int n,maxxx;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {cin>>a[i];
  cout<<endl;}
  maxxx=maxx(a,n);
  cout<<maxxx;
	return 0;
}
