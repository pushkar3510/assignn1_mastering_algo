#include<bits/stdc++.h>
using namespace std;
int n,k,t;
int main(){
    cin>>t;
    while(t--){
        cin>>n>>k;
        int sum=0,curr=1,mul=n+1;
        while(n>=k){
            if(n&1)sum+=curr;
            curr<<=1;
            n>>=1;
        }cout<<mul*sum/2<<endl;
    }return 0;
}