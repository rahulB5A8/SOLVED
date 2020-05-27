#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
#include<bitset>
#include<assert.h>
#include<algorithm>
#include<vector>
#include<set>
#include<limits.h>
#include<map>
#include<stack>
#include<stdio.h>
#include<queue>
int n;
int a[100];
int ok(int M){
   int z = a[0]%M;
   for(int i=1;i<n;++i ){
      if(a[i]%M!=z)return 0;
   }
   return 1;
}
int main(){
	
	//freopen("10.txt","r",stdin);
   //freopen("10out.txt","w",stdout);
   si(n);
   vector<int>v;
   for(int i=0;i<n;++i)si(a[i]);
   int p = a[0]-a[1];
   if(p<0)p=-p;
   for(int d=1; d*d<=p; ++d){
      if(p%d!= 0)continue;
      int M1=d,M2=p/d;
      if(ok(M1) && M1!=1)v.pb(M1);
      if(ok(M2) && M2!=M1)v.pb(M2);
   }
   sort(all(v));
   for(int i=0;i<v.size();i++)printf("%d ",v[i]);
   printf("\n");
   return 0;
}
