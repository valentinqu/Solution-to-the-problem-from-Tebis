#include<bits/stdc++.h>
using namespace std;

const int n=15;
int ans, f[n+1][n+1];

//depth first search
void dfs(int r, int c, int sum){
    if(r==n+1){
        ans=max(ans, sum);
        return;
    }

    dfs(r+1, c, sum+f[r][c]);
    dfs(r+1, c+1, sum+f[r][c]);
}

int main(){
    freopen("triangle2.txt", "r", stdin);
    
    for(int i=1;i<=n;i++)
        for(int j=1;j<=i;j++)
            cin>>f[i][j];

    dfs(1, 1, 0);
    cout<<ans<<endl;
    return 0;
}