#include<bits/stdc++.h>
using namespace std;
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n,c,q;
	cin>>n;                    /*size of array*/
	cin>>q;                    /*Element to search*/
  	int a[n];
	for(int i=1; i<=n; i++)
	{
		cin>>a[i];
    }
    for(int i=1; i<=n; i++)
    {
    	if(a[i]==q)
    	{
    		c=i;        /*Index number of the searched element*/
		}
	}
   cout<<c;

   return 0;
}
