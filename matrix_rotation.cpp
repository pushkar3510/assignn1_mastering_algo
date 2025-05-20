#include<bits/stdc++.h>
using namespace std;void rotate(vector<vector<int>>& matrix) {
    /*
    INTUTION:there was written to do it in place which gave me hint to think about reflection along axis as that can be done in place easily, and have also studied in jee. So problem of 90*rotation became problem of first reflection about x=0 and then about y=-x
        TC:O(N^2) SC:O(1)
    */
    int n=matrix.size();
    int top=0,bottom=n-1;
    while(top<bottom){
        for(int i=0;i<n;i++){
            swap(matrix[top][i],matrix[bottom][i]);
        }
        top++;
        bottom--;
    }for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
}