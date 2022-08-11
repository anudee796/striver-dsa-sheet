#include<bits/stdc++.h>
using namespace std;
void fun(vector<vector<int>> &v){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            if(v[i][j]==0){
                v[i][0]=0;
                v[0][j]=0;
            }
        }
    }
    for(int i=0;i<v.size();i++){
        if(v[i][0]==0){
            for(int j=0;j<v[0].size();j++){
                v[i][j]=0;
            }
        }
    }
     for(int i=0;i<v[0].size();i++){
        if(v[0][i]==0){
            for(int j=0;j<v.size();j++){
                v[j][i]=0;
            }
        }
    }
}
int main(){
    vector<vector<int>> v;
    int n,m;
    cin>>n>>m;
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
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
