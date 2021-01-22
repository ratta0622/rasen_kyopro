#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main(){
  int n,m;  
  cin >> n >> m;
  int c[m+1];
  c[0] = -1;

  for(int i=1; i<=m; ++i){
    cin >> c[i];
  }

  sort(c, c+m);

  int dp[m+1][n+1] = {};
  for(int i=0; i<=m; ++i){
    dp[i][0] = 0;
  }
  for(int i=0; i<=n; ++i){
    dp[0][i] = INT_MAX;
  }

  for(int i=1; i<=m; ++i){
    for(int j=1; j<=n; ++j){
      cout << dp[i][j];
    }
    cout << endl;
  }

  for(int i=1; i<=m; ++i){
    for(int j=1; j<=n; ++j){
      dp[i][j] = min(dp[i-1][j], dp[i][j-c[i]]+1);
    }
  }

  for(int i=1; i<=m; ++i){
    for(int j=1; j<=n; ++j){
      cout << dp[i][j];
    }
    cout << endl;
  }

  cout << dp[m][n] << endl;

  return 0;
}
