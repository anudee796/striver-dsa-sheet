#include<bits/stdc++.h>
using namespace std;
void fun(vector<vector<int>> &v){
    int row=v.size();
    int col=v[0].size();
    vector<int> n(v.size(),0);
    vector<int> l(v[0].size(),0);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(v[i][j]!=0){
                l[j]++;
                n[i]++;
            }
        }
    }
    for(int i=0;i<row;i++){
        if(n[i]!=col){
            for(int j=0;j<col;j++){
                v[i][j]=0;
            }
        }
    }
    for(int j=0;j<col;j++){
        if(l[j]!=row){
            for(int i=0;i<row;i++){
                v[i][j]=0;
            }
        }
    }
}
int main(){
    vector<vector<int>> v;
    int n=2;
    int m=3;
    for(int i=0;i<n;i++){
        vector<int> l;
        for(int j=0;j<m;j++){
            int temp;
            cin>>temp;
            l.push_back(temp);
        }
        v.push_back(l);
    }
    fun(v);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
