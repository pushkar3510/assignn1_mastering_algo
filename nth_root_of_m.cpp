#include<bits/stdc++.h>
using namespace std;
int NthRoot(int n, int m) {
  float x,ans=1;
  while(fabs(ans-x)>=.01){
    x=ans;
    ans=x-(x-(double)m*pow(x,1-n))/n;
  }
  ans=round(ans);
  if(round(pow(ans,n))==m)return ans;
  return -1;
}