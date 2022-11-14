#include<bits/stdc++.h>
using namespace std;

const int n=100;
int f[n+1][n+1], g[n+1][n+1];

int main(){
    freopen("triangle.txt", "r", stdin);

    for(int i=1;i<=n;i++)
        for(int j=1;j<=i;j++)
            cin>>f[i][j];

    for(int i=1;i<=n;i++)
        for(int j=1;j<=i;j++)
            g[i][j]=max(g[i-1][j-1], g[i-1][j])+f[i][j];

    int ans=g[n][1];
    for(int i=2;i<=n;i++) ans=max(ans, g[n][i]);
    cout<<ans<<endl;

    return 0;
}