#include<bits/stdc++.h>
using namespace std;
void fun(vector<vector<int>> &v,int n){
    for(int i=0;i<n;i++){
        vector<int> l(i+1,0);
        v[i][0]=0;
        v[i][i]=0;
        for(int j=1;j<i;j++){
            v[i][j]=v[i-1][j-1]+v[i-1][j];
        }
        v.push_back(l);
    }
   // return v;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> v;
    fun(v,n);
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
